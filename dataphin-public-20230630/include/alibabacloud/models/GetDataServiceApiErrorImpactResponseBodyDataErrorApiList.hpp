// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATASERVICEAPIERRORIMPACTRESPONSEBODYDATAERRORAPILIST_HPP_
#define ALIBABACLOUD_MODELS_GETDATASERVICEAPIERRORIMPACTRESPONSEBODYDATAERRORAPILIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetDataServiceApiErrorImpactResponseBodyDataErrorApiList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataServiceApiErrorImpactResponseBodyDataErrorApiList& obj) { 
      DARABONBA_PTR_TO_JSON(ApiName, apiName_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataServiceApiErrorImpactResponseBodyDataErrorApiList& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiName, apiName_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
    };
    GetDataServiceApiErrorImpactResponseBodyDataErrorApiList() = default ;
    GetDataServiceApiErrorImpactResponseBodyDataErrorApiList(const GetDataServiceApiErrorImpactResponseBodyDataErrorApiList &) = default ;
    GetDataServiceApiErrorImpactResponseBodyDataErrorApiList(GetDataServiceApiErrorImpactResponseBodyDataErrorApiList &&) = default ;
    GetDataServiceApiErrorImpactResponseBodyDataErrorApiList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataServiceApiErrorImpactResponseBodyDataErrorApiList() = default ;
    GetDataServiceApiErrorImpactResponseBodyDataErrorApiList& operator=(const GetDataServiceApiErrorImpactResponseBodyDataErrorApiList &) = default ;
    GetDataServiceApiErrorImpactResponseBodyDataErrorApiList& operator=(GetDataServiceApiErrorImpactResponseBodyDataErrorApiList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apiName_ != nullptr
        && this->appId_ != nullptr && this->errorCount_ != nullptr; };
    // apiName Field Functions 
    bool hasApiName() const { return this->apiName_ != nullptr;};
    void deleteApiName() { this->apiName_ = nullptr;};
    inline string apiName() const { DARABONBA_PTR_GET_DEFAULT(apiName_, "") };
    inline GetDataServiceApiErrorImpactResponseBodyDataErrorApiList& setApiName(string apiName) { DARABONBA_PTR_SET_VALUE(apiName_, apiName) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline int64_t appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
    inline GetDataServiceApiErrorImpactResponseBodyDataErrorApiList& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // errorCount Field Functions 
    bool hasErrorCount() const { return this->errorCount_ != nullptr;};
    void deleteErrorCount() { this->errorCount_ = nullptr;};
    inline int64_t errorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0L) };
    inline GetDataServiceApiErrorImpactResponseBodyDataErrorApiList& setErrorCount(int64_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


  protected:
    std::shared_ptr<string> apiName_ = nullptr;
    std::shared_ptr<int64_t> appId_ = nullptr;
    std::shared_ptr<int64_t> errorCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
