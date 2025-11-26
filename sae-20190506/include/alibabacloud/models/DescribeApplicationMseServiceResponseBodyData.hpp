// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONMSESERVICERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONMSESERVICERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class DescribeApplicationMseServiceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationMseServiceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(MseAppId, mseAppId_);
      DARABONBA_PTR_TO_JSON(MseAppName, mseAppName_);
      DARABONBA_PTR_TO_JSON(MseAppNameSpace, mseAppNameSpace_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationMseServiceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(MseAppId, mseAppId_);
      DARABONBA_PTR_FROM_JSON(MseAppName, mseAppName_);
      DARABONBA_PTR_FROM_JSON(MseAppNameSpace, mseAppNameSpace_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeApplicationMseServiceResponseBodyData() = default ;
    DescribeApplicationMseServiceResponseBodyData(const DescribeApplicationMseServiceResponseBodyData &) = default ;
    DescribeApplicationMseServiceResponseBodyData(DescribeApplicationMseServiceResponseBodyData &&) = default ;
    DescribeApplicationMseServiceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationMseServiceResponseBodyData() = default ;
    DescribeApplicationMseServiceResponseBodyData& operator=(const DescribeApplicationMseServiceResponseBodyData &) = default ;
    DescribeApplicationMseServiceResponseBodyData& operator=(DescribeApplicationMseServiceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mseAppId_ == nullptr
        && return this->mseAppName_ == nullptr && return this->mseAppNameSpace_ == nullptr && return this->status_ == nullptr; };
    // mseAppId Field Functions 
    bool hasMseAppId() const { return this->mseAppId_ != nullptr;};
    void deleteMseAppId() { this->mseAppId_ = nullptr;};
    inline string mseAppId() const { DARABONBA_PTR_GET_DEFAULT(mseAppId_, "") };
    inline DescribeApplicationMseServiceResponseBodyData& setMseAppId(string mseAppId) { DARABONBA_PTR_SET_VALUE(mseAppId_, mseAppId) };


    // mseAppName Field Functions 
    bool hasMseAppName() const { return this->mseAppName_ != nullptr;};
    void deleteMseAppName() { this->mseAppName_ = nullptr;};
    inline string mseAppName() const { DARABONBA_PTR_GET_DEFAULT(mseAppName_, "") };
    inline DescribeApplicationMseServiceResponseBodyData& setMseAppName(string mseAppName) { DARABONBA_PTR_SET_VALUE(mseAppName_, mseAppName) };


    // mseAppNameSpace Field Functions 
    bool hasMseAppNameSpace() const { return this->mseAppNameSpace_ != nullptr;};
    void deleteMseAppNameSpace() { this->mseAppNameSpace_ = nullptr;};
    inline string mseAppNameSpace() const { DARABONBA_PTR_GET_DEFAULT(mseAppNameSpace_, "") };
    inline DescribeApplicationMseServiceResponseBodyData& setMseAppNameSpace(string mseAppNameSpace) { DARABONBA_PTR_SET_VALUE(mseAppNameSpace_, mseAppNameSpace) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeApplicationMseServiceResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The application ID.
    std::shared_ptr<string> mseAppId_ = nullptr;
    // The application name.
    std::shared_ptr<string> mseAppName_ = nullptr;
    // The namespace.
    std::shared_ptr<string> mseAppNameSpace_ = nullptr;
    // The application status. Valid values:
    // 
    // *   EXPIRED
    // *   REBOOTING
    // *   WAITING
    // *   FAIL
    // *   NULL/SUCCESS
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
