// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHSTOPSTREAMSRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_BATCHSTOPSTREAMSRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchStopStreamsResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchStopStreamsResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, BatchStopStreamsResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    BatchStopStreamsResponseBodyResults() = default ;
    BatchStopStreamsResponseBodyResults(const BatchStopStreamsResponseBodyResults &) = default ;
    BatchStopStreamsResponseBodyResults(BatchStopStreamsResponseBodyResults &&) = default ;
    BatchStopStreamsResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchStopStreamsResponseBodyResults() = default ;
    BatchStopStreamsResponseBodyResults& operator=(const BatchStopStreamsResponseBodyResults &) = default ;
    BatchStopStreamsResponseBodyResults& operator=(BatchStopStreamsResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->error_ != nullptr
        && this->id_ != nullptr && this->name_ != nullptr; };
    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline BatchStopStreamsResponseBodyResults& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline BatchStopStreamsResponseBodyResults& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline BatchStopStreamsResponseBodyResults& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> error_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
