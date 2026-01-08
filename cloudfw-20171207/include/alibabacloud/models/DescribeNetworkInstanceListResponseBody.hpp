// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKINSTANCELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNetworkInstanceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkInstanceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkInstanceList, networkInstanceList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkInstanceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkInstanceList, networkInstanceList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNetworkInstanceListResponseBody() = default ;
    DescribeNetworkInstanceListResponseBody(const DescribeNetworkInstanceListResponseBody &) = default ;
    DescribeNetworkInstanceListResponseBody(DescribeNetworkInstanceListResponseBody &&) = default ;
    DescribeNetworkInstanceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkInstanceListResponseBody() = default ;
    DescribeNetworkInstanceListResponseBody& operator=(const DescribeNetworkInstanceListResponseBody &) = default ;
    DescribeNetworkInstanceListResponseBody& operator=(DescribeNetworkInstanceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NetworkInstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkInstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(NetworkInstanceId, networkInstanceId_);
        DARABONBA_PTR_TO_JSON(NetworkInstanceName, networkInstanceName_);
        DARABONBA_PTR_TO_JSON(NetworkInstanceType, networkInstanceType_);
        DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkInstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(NetworkInstanceId, networkInstanceId_);
        DARABONBA_PTR_FROM_JSON(NetworkInstanceName, networkInstanceName_);
        DARABONBA_PTR_FROM_JSON(NetworkInstanceType, networkInstanceType_);
        DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      };
      NetworkInstanceList() = default ;
      NetworkInstanceList(const NetworkInstanceList &) = default ;
      NetworkInstanceList(NetworkInstanceList &&) = default ;
      NetworkInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkInstanceList() = default ;
      NetworkInstanceList& operator=(const NetworkInstanceList &) = default ;
      NetworkInstanceList& operator=(NetworkInstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->networkInstanceId_ == nullptr
        && this->networkInstanceName_ == nullptr && this->networkInstanceType_ == nullptr && this->regionNo_ == nullptr; };
      // networkInstanceId Field Functions 
      bool hasNetworkInstanceId() const { return this->networkInstanceId_ != nullptr;};
      void deleteNetworkInstanceId() { this->networkInstanceId_ = nullptr;};
      inline string getNetworkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceId_, "") };
      inline NetworkInstanceList& setNetworkInstanceId(string networkInstanceId) { DARABONBA_PTR_SET_VALUE(networkInstanceId_, networkInstanceId) };


      // networkInstanceName Field Functions 
      bool hasNetworkInstanceName() const { return this->networkInstanceName_ != nullptr;};
      void deleteNetworkInstanceName() { this->networkInstanceName_ = nullptr;};
      inline string getNetworkInstanceName() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceName_, "") };
      inline NetworkInstanceList& setNetworkInstanceName(string networkInstanceName) { DARABONBA_PTR_SET_VALUE(networkInstanceName_, networkInstanceName) };


      // networkInstanceType Field Functions 
      bool hasNetworkInstanceType() const { return this->networkInstanceType_ != nullptr;};
      void deleteNetworkInstanceType() { this->networkInstanceType_ = nullptr;};
      inline string getNetworkInstanceType() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceType_, "") };
      inline NetworkInstanceList& setNetworkInstanceType(string networkInstanceType) { DARABONBA_PTR_SET_VALUE(networkInstanceType_, networkInstanceType) };


      // regionNo Field Functions 
      bool hasRegionNo() const { return this->regionNo_ != nullptr;};
      void deleteRegionNo() { this->regionNo_ = nullptr;};
      inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
      inline NetworkInstanceList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    protected:
      shared_ptr<string> networkInstanceId_ {};
      shared_ptr<string> networkInstanceName_ {};
      shared_ptr<string> networkInstanceType_ {};
      shared_ptr<string> regionNo_ {};
    };

    virtual bool empty() const override { return this->networkInstanceList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // networkInstanceList Field Functions 
    bool hasNetworkInstanceList() const { return this->networkInstanceList_ != nullptr;};
    void deleteNetworkInstanceList() { this->networkInstanceList_ = nullptr;};
    inline const vector<DescribeNetworkInstanceListResponseBody::NetworkInstanceList> & getNetworkInstanceList() const { DARABONBA_PTR_GET_CONST(networkInstanceList_, vector<DescribeNetworkInstanceListResponseBody::NetworkInstanceList>) };
    inline vector<DescribeNetworkInstanceListResponseBody::NetworkInstanceList> getNetworkInstanceList() { DARABONBA_PTR_GET(networkInstanceList_, vector<DescribeNetworkInstanceListResponseBody::NetworkInstanceList>) };
    inline DescribeNetworkInstanceListResponseBody& setNetworkInstanceList(const vector<DescribeNetworkInstanceListResponseBody::NetworkInstanceList> & networkInstanceList) { DARABONBA_PTR_SET_VALUE(networkInstanceList_, networkInstanceList) };
    inline DescribeNetworkInstanceListResponseBody& setNetworkInstanceList(vector<DescribeNetworkInstanceListResponseBody::NetworkInstanceList> && networkInstanceList) { DARABONBA_PTR_SET_RVALUE(networkInstanceList_, networkInstanceList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkInstanceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNetworkInstanceListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeNetworkInstanceListResponseBody::NetworkInstanceList>> networkInstanceList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
