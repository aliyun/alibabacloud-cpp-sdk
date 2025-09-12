// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDATASETTASK2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDATASETTASK2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UmengFinplus20220913
{
namespace Models
{
  class SubmitDataSetTask2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDataSetTask2Request& obj) { 
      DARABONBA_PTR_TO_JSON(clientId, clientId_);
      DARABONBA_PTR_TO_JSON(dataSetId, dataSetId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDataSetTask2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(clientId, clientId_);
      DARABONBA_PTR_FROM_JSON(dataSetId, dataSetId_);
    };
    SubmitDataSetTask2Request() = default ;
    SubmitDataSetTask2Request(const SubmitDataSetTask2Request &) = default ;
    SubmitDataSetTask2Request(SubmitDataSetTask2Request &&) = default ;
    SubmitDataSetTask2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDataSetTask2Request() = default ;
    SubmitDataSetTask2Request& operator=(const SubmitDataSetTask2Request &) = default ;
    SubmitDataSetTask2Request& operator=(SubmitDataSetTask2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientId_ != nullptr
        && this->dataSetId_ != nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline int64_t clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, 0L) };
    inline SubmitDataSetTask2Request& setClientId(int64_t clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // dataSetId Field Functions 
    bool hasDataSetId() const { return this->dataSetId_ != nullptr;};
    void deleteDataSetId() { this->dataSetId_ = nullptr;};
    inline int64_t dataSetId() const { DARABONBA_PTR_GET_DEFAULT(dataSetId_, 0L) };
    inline SubmitDataSetTask2Request& setDataSetId(int64_t dataSetId) { DARABONBA_PTR_SET_VALUE(dataSetId_, dataSetId) };


  protected:
    std::shared_ptr<int64_t> clientId_ = nullptr;
    std::shared_ptr<int64_t> dataSetId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UmengFinplus20220913
#endif
