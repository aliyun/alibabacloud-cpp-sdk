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
      DARABONBA_PTR_TO_JSON(ClusterTypeInfos, clusterTypeInfos_);
      DARABONBA_PTR_TO_JSON(ClusterTypes, clusterTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterTypeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterTypeInfos, clusterTypeInfos_);
      DARABONBA_PTR_FROM_JSON(ClusterTypes, clusterTypes_);
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
    class ClusterTypeInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterTypeInfos& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_TO_JSON(IsMultiAZ, isMultiAZ_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterTypeInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
        DARABONBA_PTR_FROM_JSON(IsMultiAZ, isMultiAZ_);
      };
      ClusterTypeInfos() = default ;
      ClusterTypeInfos(const ClusterTypeInfos &) = default ;
      ClusterTypeInfos(ClusterTypeInfos &&) = default ;
      ClusterTypeInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterTypeInfos() = default ;
      ClusterTypeInfos& operator=(const ClusterTypeInfos &) = default ;
      ClusterTypeInfos& operator=(ClusterTypeInfos &&) = default ;
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
      inline ClusterTypeInfos& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


      // isMultiAZ Field Functions 
      bool hasIsMultiAZ() const { return this->isMultiAZ_ != nullptr;};
      void deleteIsMultiAZ() { this->isMultiAZ_ = nullptr;};
      inline bool getIsMultiAZ() const { DARABONBA_PTR_GET_DEFAULT(isMultiAZ_, false) };
      inline ClusterTypeInfos& setIsMultiAZ(bool isMultiAZ) { DARABONBA_PTR_SET_VALUE(isMultiAZ_, isMultiAZ) };


    protected:
      shared_ptr<string> clusterType_ {};
      shared_ptr<bool> isMultiAZ_ {};
    };

    virtual bool empty() const override { return this->clusterTypeInfos_ == nullptr
        && this->clusterTypes_ == nullptr && this->requestId_ == nullptr; };
    // clusterTypeInfos Field Functions 
    bool hasClusterTypeInfos() const { return this->clusterTypeInfos_ != nullptr;};
    void deleteClusterTypeInfos() { this->clusterTypeInfos_ = nullptr;};
    inline const vector<ListClusterTypeResponseBody::ClusterTypeInfos> & getClusterTypeInfos() const { DARABONBA_PTR_GET_CONST(clusterTypeInfos_, vector<ListClusterTypeResponseBody::ClusterTypeInfos>) };
    inline vector<ListClusterTypeResponseBody::ClusterTypeInfos> getClusterTypeInfos() { DARABONBA_PTR_GET(clusterTypeInfos_, vector<ListClusterTypeResponseBody::ClusterTypeInfos>) };
    inline ListClusterTypeResponseBody& setClusterTypeInfos(const vector<ListClusterTypeResponseBody::ClusterTypeInfos> & clusterTypeInfos) { DARABONBA_PTR_SET_VALUE(clusterTypeInfos_, clusterTypeInfos) };
    inline ListClusterTypeResponseBody& setClusterTypeInfos(vector<ListClusterTypeResponseBody::ClusterTypeInfos> && clusterTypeInfos) { DARABONBA_PTR_SET_RVALUE(clusterTypeInfos_, clusterTypeInfos) };


    // clusterTypes Field Functions 
    bool hasClusterTypes() const { return this->clusterTypes_ != nullptr;};
    void deleteClusterTypes() { this->clusterTypes_ = nullptr;};
    inline const vector<string> & getClusterTypes() const { DARABONBA_PTR_GET_CONST(clusterTypes_, vector<string>) };
    inline vector<string> getClusterTypes() { DARABONBA_PTR_GET(clusterTypes_, vector<string>) };
    inline ListClusterTypeResponseBody& setClusterTypes(const vector<string> & clusterTypes) { DARABONBA_PTR_SET_VALUE(clusterTypes_, clusterTypes) };
    inline ListClusterTypeResponseBody& setClusterTypes(vector<string> && clusterTypes) { DARABONBA_PTR_SET_RVALUE(clusterTypes_, clusterTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListClusterTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListClusterTypeResponseBody::ClusterTypeInfos>> clusterTypeInfos_ {};
    shared_ptr<vector<string>> clusterTypes_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
