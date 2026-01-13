// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUBCROWDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUBCROWDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListSubCrowdsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSubCrowdsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubCrowds, subCrowds_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSubCrowdsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubCrowds, subCrowds_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSubCrowdsResponseBody() = default ;
    ListSubCrowdsResponseBody(const ListSubCrowdsResponseBody &) = default ;
    ListSubCrowdsResponseBody(ListSubCrowdsResponseBody &&) = default ;
    ListSubCrowdsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSubCrowdsResponseBody() = default ;
    ListSubCrowdsResponseBody& operator=(const ListSubCrowdsResponseBody &) = default ;
    ListSubCrowdsResponseBody& operator=(ListSubCrowdsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubCrowds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubCrowds& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_TO_JSON(Quantity, quantity_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(SubCrowdId, subCrowdId_);
        DARABONBA_PTR_TO_JSON(Users, users_);
      };
      friend void from_json(const Darabonba::Json& j, SubCrowds& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
        DARABONBA_PTR_FROM_JSON(Quantity, quantity_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(SubCrowdId, subCrowdId_);
        DARABONBA_PTR_FROM_JSON(Users, users_);
      };
      SubCrowds() = default ;
      SubCrowds(const SubCrowds &) = default ;
      SubCrowds(SubCrowds &&) = default ;
      SubCrowds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubCrowds() = default ;
      SubCrowds& operator=(const SubCrowds &) = default ;
      SubCrowds& operator=(SubCrowds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->gmtCreateTime_ == nullptr
        && this->quantity_ == nullptr && this->source_ == nullptr && this->subCrowdId_ == nullptr && this->users_ == nullptr; };
      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline SubCrowds& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // quantity Field Functions 
      bool hasQuantity() const { return this->quantity_ != nullptr;};
      void deleteQuantity() { this->quantity_ = nullptr;};
      inline int32_t getQuantity() const { DARABONBA_PTR_GET_DEFAULT(quantity_, 0) };
      inline SubCrowds& setQuantity(int32_t quantity) { DARABONBA_PTR_SET_VALUE(quantity_, quantity) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline SubCrowds& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // subCrowdId Field Functions 
      bool hasSubCrowdId() const { return this->subCrowdId_ != nullptr;};
      void deleteSubCrowdId() { this->subCrowdId_ = nullptr;};
      inline string getSubCrowdId() const { DARABONBA_PTR_GET_DEFAULT(subCrowdId_, "") };
      inline SubCrowds& setSubCrowdId(string subCrowdId) { DARABONBA_PTR_SET_VALUE(subCrowdId_, subCrowdId) };


      // users Field Functions 
      bool hasUsers() const { return this->users_ != nullptr;};
      void deleteUsers() { this->users_ = nullptr;};
      inline string getUsers() const { DARABONBA_PTR_GET_DEFAULT(users_, "") };
      inline SubCrowds& setUsers(string users) { DARABONBA_PTR_SET_VALUE(users_, users) };


    protected:
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<int32_t> quantity_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> subCrowdId_ {};
      shared_ptr<string> users_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->subCrowds_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSubCrowdsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subCrowds Field Functions 
    bool hasSubCrowds() const { return this->subCrowds_ != nullptr;};
    void deleteSubCrowds() { this->subCrowds_ = nullptr;};
    inline const vector<ListSubCrowdsResponseBody::SubCrowds> & getSubCrowds() const { DARABONBA_PTR_GET_CONST(subCrowds_, vector<ListSubCrowdsResponseBody::SubCrowds>) };
    inline vector<ListSubCrowdsResponseBody::SubCrowds> getSubCrowds() { DARABONBA_PTR_GET(subCrowds_, vector<ListSubCrowdsResponseBody::SubCrowds>) };
    inline ListSubCrowdsResponseBody& setSubCrowds(const vector<ListSubCrowdsResponseBody::SubCrowds> & subCrowds) { DARABONBA_PTR_SET_VALUE(subCrowds_, subCrowds) };
    inline ListSubCrowdsResponseBody& setSubCrowds(vector<ListSubCrowdsResponseBody::SubCrowds> && subCrowds) { DARABONBA_PTR_SET_RVALUE(subCrowds_, subCrowds) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSubCrowdsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListSubCrowdsResponseBody::SubCrowds>> subCrowds_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
