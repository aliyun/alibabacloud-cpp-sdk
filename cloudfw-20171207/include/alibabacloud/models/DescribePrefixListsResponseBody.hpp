// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPREFIXLISTSRESPONSEBODY_HPP_
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
  class DescribePrefixListsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrefixListsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PrefixList, prefixList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrefixListsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PrefixList, prefixList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribePrefixListsResponseBody() = default ;
    DescribePrefixListsResponseBody(const DescribePrefixListsResponseBody &) = default ;
    DescribePrefixListsResponseBody(DescribePrefixListsResponseBody &&) = default ;
    DescribePrefixListsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrefixListsResponseBody() = default ;
    DescribePrefixListsResponseBody& operator=(const DescribePrefixListsResponseBody &) = default ;
    DescribePrefixListsResponseBody& operator=(DescribePrefixListsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PrefixList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrefixList& obj) { 
        DARABONBA_PTR_TO_JSON(AddressFamily, addressFamily_);
        DARABONBA_PTR_TO_JSON(AssociationCount, associationCount_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(MaxEntries, maxEntries_);
        DARABONBA_PTR_TO_JSON(PrefixListId, prefixListId_);
        DARABONBA_PTR_TO_JSON(PrefixListName, prefixListName_);
      };
      friend void from_json(const Darabonba::Json& j, PrefixList& obj) { 
        DARABONBA_PTR_FROM_JSON(AddressFamily, addressFamily_);
        DARABONBA_PTR_FROM_JSON(AssociationCount, associationCount_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(MaxEntries, maxEntries_);
        DARABONBA_PTR_FROM_JSON(PrefixListId, prefixListId_);
        DARABONBA_PTR_FROM_JSON(PrefixListName, prefixListName_);
      };
      PrefixList() = default ;
      PrefixList(const PrefixList &) = default ;
      PrefixList(PrefixList &&) = default ;
      PrefixList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrefixList() = default ;
      PrefixList& operator=(const PrefixList &) = default ;
      PrefixList& operator=(PrefixList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->addressFamily_ == nullptr
        && this->associationCount_ == nullptr && this->creationTime_ == nullptr && this->description_ == nullptr && this->maxEntries_ == nullptr && this->prefixListId_ == nullptr
        && this->prefixListName_ == nullptr; };
      // addressFamily Field Functions 
      bool hasAddressFamily() const { return this->addressFamily_ != nullptr;};
      void deleteAddressFamily() { this->addressFamily_ = nullptr;};
      inline string getAddressFamily() const { DARABONBA_PTR_GET_DEFAULT(addressFamily_, "") };
      inline PrefixList& setAddressFamily(string addressFamily) { DARABONBA_PTR_SET_VALUE(addressFamily_, addressFamily) };


      // associationCount Field Functions 
      bool hasAssociationCount() const { return this->associationCount_ != nullptr;};
      void deleteAssociationCount() { this->associationCount_ = nullptr;};
      inline int32_t getAssociationCount() const { DARABONBA_PTR_GET_DEFAULT(associationCount_, 0) };
      inline PrefixList& setAssociationCount(int32_t associationCount) { DARABONBA_PTR_SET_VALUE(associationCount_, associationCount) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline PrefixList& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PrefixList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // maxEntries Field Functions 
      bool hasMaxEntries() const { return this->maxEntries_ != nullptr;};
      void deleteMaxEntries() { this->maxEntries_ = nullptr;};
      inline int32_t getMaxEntries() const { DARABONBA_PTR_GET_DEFAULT(maxEntries_, 0) };
      inline PrefixList& setMaxEntries(int32_t maxEntries) { DARABONBA_PTR_SET_VALUE(maxEntries_, maxEntries) };


      // prefixListId Field Functions 
      bool hasPrefixListId() const { return this->prefixListId_ != nullptr;};
      void deletePrefixListId() { this->prefixListId_ = nullptr;};
      inline string getPrefixListId() const { DARABONBA_PTR_GET_DEFAULT(prefixListId_, "") };
      inline PrefixList& setPrefixListId(string prefixListId) { DARABONBA_PTR_SET_VALUE(prefixListId_, prefixListId) };


      // prefixListName Field Functions 
      bool hasPrefixListName() const { return this->prefixListName_ != nullptr;};
      void deletePrefixListName() { this->prefixListName_ = nullptr;};
      inline string getPrefixListName() const { DARABONBA_PTR_GET_DEFAULT(prefixListName_, "") };
      inline PrefixList& setPrefixListName(string prefixListName) { DARABONBA_PTR_SET_VALUE(prefixListName_, prefixListName) };


    protected:
      // The IP address family of the prefix list. Valid values:
      // 
      // *   IPv4
      // *   IPv6
      shared_ptr<string> addressFamily_ {};
      // The number of associated resources.
      shared_ptr<int32_t> associationCount_ {};
      // The creation time.
      shared_ptr<string> creationTime_ {};
      // The description.
      shared_ptr<string> description_ {};
      // The maximum number of entries in the prefix list.
      shared_ptr<int32_t> maxEntries_ {};
      // The ID of the prefix list.
      shared_ptr<string> prefixListId_ {};
      // The name of the prefix list.
      shared_ptr<string> prefixListName_ {};
    };

    virtual bool empty() const override { return this->prefixList_ == nullptr
        && this->requestId_ == nullptr; };
    // prefixList Field Functions 
    bool hasPrefixList() const { return this->prefixList_ != nullptr;};
    void deletePrefixList() { this->prefixList_ = nullptr;};
    inline const vector<DescribePrefixListsResponseBody::PrefixList> & getPrefixList() const { DARABONBA_PTR_GET_CONST(prefixList_, vector<DescribePrefixListsResponseBody::PrefixList>) };
    inline vector<DescribePrefixListsResponseBody::PrefixList> getPrefixList() { DARABONBA_PTR_GET(prefixList_, vector<DescribePrefixListsResponseBody::PrefixList>) };
    inline DescribePrefixListsResponseBody& setPrefixList(const vector<DescribePrefixListsResponseBody::PrefixList> & prefixList) { DARABONBA_PTR_SET_VALUE(prefixList_, prefixList) };
    inline DescribePrefixListsResponseBody& setPrefixList(vector<DescribePrefixListsResponseBody::PrefixList> && prefixList) { DARABONBA_PTR_SET_RVALUE(prefixList_, prefixList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePrefixListsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about the prefix lists.
    shared_ptr<vector<DescribePrefixListsResponseBody::PrefixList>> prefixList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
