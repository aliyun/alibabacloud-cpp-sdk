// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDPIGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDPIGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListDpiGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDpiGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DpiGroup, dpiGroup_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDpiGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DpiGroup, dpiGroup_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDpiGroupsResponseBody() = default ;
    ListDpiGroupsResponseBody(const ListDpiGroupsResponseBody &) = default ;
    ListDpiGroupsResponseBody(ListDpiGroupsResponseBody &&) = default ;
    ListDpiGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDpiGroupsResponseBody() = default ;
    ListDpiGroupsResponseBody& operator=(const ListDpiGroupsResponseBody &) = default ;
    ListDpiGroupsResponseBody& operator=(ListDpiGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DpiGroup : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DpiGroup& obj) { 
        DARABONBA_PTR_TO_JSON(DpiGroupId, dpiGroupId_);
        DARABONBA_PTR_TO_JSON(DpiGroupName, dpiGroupName_);
        DARABONBA_PTR_TO_JSON(MinEngineVersion, minEngineVersion_);
        DARABONBA_PTR_TO_JSON(MinSignatureDbVersion, minSignatureDbVersion_);
      };
      friend void from_json(const Darabonba::Json& j, DpiGroup& obj) { 
        DARABONBA_PTR_FROM_JSON(DpiGroupId, dpiGroupId_);
        DARABONBA_PTR_FROM_JSON(DpiGroupName, dpiGroupName_);
        DARABONBA_PTR_FROM_JSON(MinEngineVersion, minEngineVersion_);
        DARABONBA_PTR_FROM_JSON(MinSignatureDbVersion, minSignatureDbVersion_);
      };
      DpiGroup() = default ;
      DpiGroup(const DpiGroup &) = default ;
      DpiGroup(DpiGroup &&) = default ;
      DpiGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DpiGroup() = default ;
      DpiGroup& operator=(const DpiGroup &) = default ;
      DpiGroup& operator=(DpiGroup &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dpiGroupId_ == nullptr
        && this->dpiGroupName_ == nullptr && this->minEngineVersion_ == nullptr && this->minSignatureDbVersion_ == nullptr; };
      // dpiGroupId Field Functions 
      bool hasDpiGroupId() const { return this->dpiGroupId_ != nullptr;};
      void deleteDpiGroupId() { this->dpiGroupId_ = nullptr;};
      inline string getDpiGroupId() const { DARABONBA_PTR_GET_DEFAULT(dpiGroupId_, "") };
      inline DpiGroup& setDpiGroupId(string dpiGroupId) { DARABONBA_PTR_SET_VALUE(dpiGroupId_, dpiGroupId) };


      // dpiGroupName Field Functions 
      bool hasDpiGroupName() const { return this->dpiGroupName_ != nullptr;};
      void deleteDpiGroupName() { this->dpiGroupName_ = nullptr;};
      inline string getDpiGroupName() const { DARABONBA_PTR_GET_DEFAULT(dpiGroupName_, "") };
      inline DpiGroup& setDpiGroupName(string dpiGroupName) { DARABONBA_PTR_SET_VALUE(dpiGroupName_, dpiGroupName) };


      // minEngineVersion Field Functions 
      bool hasMinEngineVersion() const { return this->minEngineVersion_ != nullptr;};
      void deleteMinEngineVersion() { this->minEngineVersion_ = nullptr;};
      inline string getMinEngineVersion() const { DARABONBA_PTR_GET_DEFAULT(minEngineVersion_, "") };
      inline DpiGroup& setMinEngineVersion(string minEngineVersion) { DARABONBA_PTR_SET_VALUE(minEngineVersion_, minEngineVersion) };


      // minSignatureDbVersion Field Functions 
      bool hasMinSignatureDbVersion() const { return this->minSignatureDbVersion_ != nullptr;};
      void deleteMinSignatureDbVersion() { this->minSignatureDbVersion_ = nullptr;};
      inline string getMinSignatureDbVersion() const { DARABONBA_PTR_GET_DEFAULT(minSignatureDbVersion_, "") };
      inline DpiGroup& setMinSignatureDbVersion(string minSignatureDbVersion) { DARABONBA_PTR_SET_VALUE(minSignatureDbVersion_, minSignatureDbVersion) };


    protected:
      // The ID of the application group.
      shared_ptr<string> dpiGroupId_ {};
      // The name of the application group.
      shared_ptr<string> dpiGroupName_ {};
      // The minimum version of the deep packet inspection (DPI) engine that supports the application group.
      shared_ptr<string> minEngineVersion_ {};
      // The minimum version of the signature database that supports the application group.
      shared_ptr<string> minSignatureDbVersion_ {};
    };

    virtual bool empty() const override { return this->dpiGroup_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // dpiGroup Field Functions 
    bool hasDpiGroup() const { return this->dpiGroup_ != nullptr;};
    void deleteDpiGroup() { this->dpiGroup_ = nullptr;};
    inline const vector<ListDpiGroupsResponseBody::DpiGroup> & getDpiGroup() const { DARABONBA_PTR_GET_CONST(dpiGroup_, vector<ListDpiGroupsResponseBody::DpiGroup>) };
    inline vector<ListDpiGroupsResponseBody::DpiGroup> getDpiGroup() { DARABONBA_PTR_GET(dpiGroup_, vector<ListDpiGroupsResponseBody::DpiGroup>) };
    inline ListDpiGroupsResponseBody& setDpiGroup(const vector<ListDpiGroupsResponseBody::DpiGroup> & dpiGroup) { DARABONBA_PTR_SET_VALUE(dpiGroup_, dpiGroup) };
    inline ListDpiGroupsResponseBody& setDpiGroup(vector<ListDpiGroupsResponseBody::DpiGroup> && dpiGroup) { DARABONBA_PTR_SET_RVALUE(dpiGroup_, dpiGroup) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDpiGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDpiGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDpiGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of application groups.
    shared_ptr<vector<ListDpiGroupsResponseBody::DpiGroup>> dpiGroup_ {};
    // The token for the next page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of application groups returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
