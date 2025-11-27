// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEDEVICESRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEDEVICESRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchDeleteDevicesResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteDevicesResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Error, error_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteDevicesResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Error, error_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    BatchDeleteDevicesResponseBodyResults() = default ;
    BatchDeleteDevicesResponseBodyResults(const BatchDeleteDevicesResponseBodyResults &) = default ;
    BatchDeleteDevicesResponseBodyResults(BatchDeleteDevicesResponseBodyResults &&) = default ;
    BatchDeleteDevicesResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteDevicesResponseBodyResults() = default ;
    BatchDeleteDevicesResponseBodyResults& operator=(const BatchDeleteDevicesResponseBodyResults &) = default ;
    BatchDeleteDevicesResponseBodyResults& operator=(BatchDeleteDevicesResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->error_ == nullptr
        && return this->id_ == nullptr; };
    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string error() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline BatchDeleteDevicesResponseBodyResults& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline BatchDeleteDevicesResponseBodyResults& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    std::shared_ptr<string> error_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
