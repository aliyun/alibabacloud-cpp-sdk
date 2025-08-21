// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISTAPPLICATIONDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISTAPPLICATIONDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DistApplicationDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DistApplicationDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(DistStrategy, distStrategy_);
    };
    friend void from_json(const Darabonba::Json& j, DistApplicationDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(DistStrategy, distStrategy_);
    };
    DistApplicationDataRequest() = default ;
    DistApplicationDataRequest(const DistApplicationDataRequest &) = default ;
    DistApplicationDataRequest(DistApplicationDataRequest &&) = default ;
    DistApplicationDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DistApplicationDataRequest() = default ;
    DistApplicationDataRequest& operator=(const DistApplicationDataRequest &) = default ;
    DistApplicationDataRequest& operator=(DistApplicationDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->data_ != nullptr && this->distStrategy_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DistApplicationDataRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline DistApplicationDataRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


    // distStrategy Field Functions 
    bool hasDistStrategy() const { return this->distStrategy_ != nullptr;};
    void deleteDistStrategy() { this->distStrategy_ = nullptr;};
    inline string distStrategy() const { DARABONBA_PTR_GET_DEFAULT(distStrategy_, "") };
    inline DistApplicationDataRequest& setDistStrategy(string distStrategy) { DARABONBA_PTR_SET_VALUE(distStrategy_, distStrategy) };


  protected:
    // The ID of the application. To obtain the application ID, call the ListApplications operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The list of data files that you want to distribute. The value must be a JSON string.
    // 
    // This parameter is required.
    std::shared_ptr<string> data_ = nullptr;
    // The canary release policy. The value must be a JSON string. You can specify multiple distribution policies. By default, all data files are distributed.
    std::shared_ptr<string> distStrategy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
