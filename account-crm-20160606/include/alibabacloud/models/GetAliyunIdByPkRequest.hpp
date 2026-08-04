// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIYUNIDBYPKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETALIYUNIDBYPKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class GetAliyunIdByPkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAliyunIdByPkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Pk, pk_);
    };
    friend void from_json(const Darabonba::Json& j, GetAliyunIdByPkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Pk, pk_);
    };
    GetAliyunIdByPkRequest() = default ;
    GetAliyunIdByPkRequest(const GetAliyunIdByPkRequest &) = default ;
    GetAliyunIdByPkRequest(GetAliyunIdByPkRequest &&) = default ;
    GetAliyunIdByPkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAliyunIdByPkRequest() = default ;
    GetAliyunIdByPkRequest& operator=(const GetAliyunIdByPkRequest &) = default ;
    GetAliyunIdByPkRequest& operator=(GetAliyunIdByPkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->pk_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetAliyunIdByPkRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // pk Field Functions 
    bool hasPk() const { return this->pk_ != nullptr;};
    void deletePk() { this->pk_ = nullptr;};
    inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
    inline GetAliyunIdByPkRequest& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


  protected:
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // This parameter is required.
    shared_ptr<string> pk_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
