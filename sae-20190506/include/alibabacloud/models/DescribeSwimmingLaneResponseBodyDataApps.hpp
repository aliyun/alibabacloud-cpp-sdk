// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESWIMMINGLANERESPONSEBODYDATAAPPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESWIMMINGLANERESPONSEBODYDATAAPPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeSwimmingLaneResponseBodyDataApps : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSwimmingLaneResponseBodyDataApps& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(MseAppId, mseAppId_);
      DARABONBA_PTR_TO_JSON(MseAppName, mseAppName_);
      DARABONBA_PTR_TO_JSON(mseNamespaceId, mseNamespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSwimmingLaneResponseBodyDataApps& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(MseAppId, mseAppId_);
      DARABONBA_PTR_FROM_JSON(MseAppName, mseAppName_);
      DARABONBA_PTR_FROM_JSON(mseNamespaceId, mseNamespaceId_);
    };
    DescribeSwimmingLaneResponseBodyDataApps() = default ;
    DescribeSwimmingLaneResponseBodyDataApps(const DescribeSwimmingLaneResponseBodyDataApps &) = default ;
    DescribeSwimmingLaneResponseBodyDataApps(DescribeSwimmingLaneResponseBodyDataApps &&) = default ;
    DescribeSwimmingLaneResponseBodyDataApps(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSwimmingLaneResponseBodyDataApps() = default ;
    DescribeSwimmingLaneResponseBodyDataApps& operator=(const DescribeSwimmingLaneResponseBodyDataApps &) = default ;
    DescribeSwimmingLaneResponseBodyDataApps& operator=(DescribeSwimmingLaneResponseBodyDataApps &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appName_ == nullptr && return this->mseAppId_ == nullptr && return this->mseAppName_ == nullptr && return this->mseNamespaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DescribeSwimmingLaneResponseBodyDataApps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DescribeSwimmingLaneResponseBodyDataApps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // mseAppId Field Functions 
    bool hasMseAppId() const { return this->mseAppId_ != nullptr;};
    void deleteMseAppId() { this->mseAppId_ = nullptr;};
    inline string mseAppId() const { DARABONBA_PTR_GET_DEFAULT(mseAppId_, "") };
    inline DescribeSwimmingLaneResponseBodyDataApps& setMseAppId(string mseAppId) { DARABONBA_PTR_SET_VALUE(mseAppId_, mseAppId) };


    // mseAppName Field Functions 
    bool hasMseAppName() const { return this->mseAppName_ != nullptr;};
    void deleteMseAppName() { this->mseAppName_ = nullptr;};
    inline string mseAppName() const { DARABONBA_PTR_GET_DEFAULT(mseAppName_, "") };
    inline DescribeSwimmingLaneResponseBodyDataApps& setMseAppName(string mseAppName) { DARABONBA_PTR_SET_VALUE(mseAppName_, mseAppName) };


    // mseNamespaceId Field Functions 
    bool hasMseNamespaceId() const { return this->mseNamespaceId_ != nullptr;};
    void deleteMseNamespaceId() { this->mseNamespaceId_ = nullptr;};
    inline string mseNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(mseNamespaceId_, "") };
    inline DescribeSwimmingLaneResponseBodyDataApps& setMseNamespaceId(string mseNamespaceId) { DARABONBA_PTR_SET_VALUE(mseNamespaceId_, mseNamespaceId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> mseAppId_ = nullptr;
    std::shared_ptr<string> mseAppName_ = nullptr;
    std::shared_ptr<string> mseNamespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
