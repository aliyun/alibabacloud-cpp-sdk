// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERTYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERTYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class ListClusterTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterTypeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterTypeDetailList, clusterTypeDetailList_);
      DARABONBA_PTR_TO_JSON(ClusterTypeList, clusterTypeList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterTypeDetailList, clusterTypeDetailList_);
      DARABONBA_PTR_FROM_JSON(ClusterTypeList, clusterTypeList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListClusterTypeResponseBody() = default ;
    ListClusterTypeResponseBody(const ListClusterTypeResponseBody &) = default ;
    ListClusterTypeResponseBody(ListClusterTypeResponseBody &&) = default ;
    ListClusterTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterTypeResponseBody() = default ;
    ListClusterTypeResponseBody& operator=(const ListClusterTypeResponseBody &) = default ;
    ListClusterTypeResponseBody& operator=(ListClusterTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterTypeDetailList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterTypeDetailList& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_TO_JSON(IsMultiAZ, isMultiAZ_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterTypeDetailList& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_FROM_JSON(IsMultiAZ, isMultiAZ_);
      };
      ClusterTypeDetailList() = default ;
      ClusterTypeDetailList(const ClusterTypeDetailList &) = default ;
      ClusterTypeDetailList(ClusterTypeDetailList &&) = default ;
      ClusterTypeDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterTypeDetailList() = default ;
      ClusterTypeDetailList& operator=(const ClusterTypeDetailList &) = default ;
      ClusterTypeDetailList& operator=(ClusterTypeDetailList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterType_ == nullptr
        && this->isMultiAZ_ == nullptr; };
      // clusterType Field Functions 
      bool hasClusterType() const { return this->clusterType_ != nullptr;};
      void deleteClusterType() { this->clusterType_ = nullptr;};
      inline string getClusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
      inline ClusterTypeDetailList& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // isMultiAZ Field Functions 
      bool hasIsMultiAZ() const { return this->isMultiAZ_ != nullptr;};
      void deleteIsMultiAZ() { this->isMultiAZ_ = nullptr;};
      inline bool getIsMultiAZ() const { DARABONBA_PTR_GET_DEFAULT(isMultiAZ_, false) };
      inline ClusterTypeDetailList& setIsMultiAZ(bool isMultiAZ) { DARABONBA_PTR_SET_VALUE(isMultiAZ_, isMultiAZ) };


    protected:
      shared_ptr<string> clusterType_ {};
      shared_ptr<bool> isMultiAZ_ {};
    };

    virtual bool empty() const override { return this->clusterTypeDetailList_ == nullptr
        && this->clusterTypeList_ == nullptr && this->requestId_ == nullptr; };
    // clusterTypeDetailList Field Functions 
    bool hasClusterTypeDetailList() const { return this->clusterTypeDetailList_ != nullptr;};
    void deleteClusterTypeDetailList() { this->clusterTypeDetailList_ = nullptr;};
    inline const vector<ListClusterTypeResponseBody::ClusterTypeDetailList> & getClusterTypeDetailList() const { DARABONBA_PTR_GET_CONST(clusterTypeDetailList_, vector<ListClusterTypeResponseBody::ClusterTypeDetailList>) };
    inline vector<ListClusterTypeResponseBody::ClusterTypeDetailList> getClusterTypeDetailList() { DARABONBA_PTR_GET(clusterTypeDetailList_, vector<ListClusterTypeResponseBody::ClusterTypeDetailList>) };
    inline ListClusterTypeResponseBody& setClusterTypeDetailList(const vector<ListClusterTypeResponseBody::ClusterTypeDetailList> & clusterTypeDetailList) { DARABONBA_PTR_SET_VALUE(clusterTypeDetailList_, clusterTypeDetailList) };
    inline ListClusterTypeResponseBody& setClusterTypeDetailList(vector<ListClusterTypeResponseBody::ClusterTypeDetailList> && clusterTypeDetailList) { DARABONBA_PTR_SET_RVALUE(clusterTypeDetailList_, clusterTypeDetailList) };


    // clusterTypeList Field Functions 
    bool hasClusterTypeList() const { return this->clusterTypeList_ != nullptr;};
    void deleteClusterTypeList() { this->clusterTypeList_ = nullptr;};
    inline const vector<string> & getClusterTypeList() const { DARABONBA_PTR_GET_CONST(clusterTypeList_, vector<string>) };
    inline vector<string> getClusterTypeList() { DARABONBA_PTR_GET(clusterTypeList_, vector<string>) };
    inline ListClusterTypeResponseBody& setClusterTypeList(const vector<string> & clusterTypeList) { DARABONBA_PTR_SET_VALUE(clusterTypeList_, clusterTypeList) };
    inline ListClusterTypeResponseBody& setClusterTypeList(vector<string> && clusterTypeList) { DARABONBA_PTR_SET_RVALUE(clusterTypeList_, clusterTypeList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListClusterTypeResponseBody::ClusterTypeDetailList>> clusterTypeDetailList_ {};
    shared_ptr<vector<string>> clusterTypeList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
