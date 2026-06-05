// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHIVESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHIVESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ListHivesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHivesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Hives, hives_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListHivesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Hives, hives_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListHivesResponseBody() = default ;
    ListHivesResponseBody(const ListHivesResponseBody &) = default ;
    ListHivesResponseBody(ListHivesResponseBody &&) = default ;
    ListHivesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHivesResponseBody() = default ;
    ListHivesResponseBody& operator=(const ListHivesResponseBody &) = default ;
    ListHivesResponseBody& operator=(ListHivesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Hives : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Hives& obj) { 
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(HiveId, hiveId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
      };
      friend void from_json(const Darabonba::Json& j, Hives& obj) { 
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(HiveId, hiveId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
      };
      Hives() = default ;
      Hives(const Hives &) = default ;
      Hives(Hives &&) = default ;
      Hives(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Hives() = default ;
      Hives& operator=(const Hives &) = default ;
      Hives& operator=(Hives &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->creationTime_ == nullptr
        && this->description_ == nullptr && this->hiveId_ == nullptr && this->name_ == nullptr; };
      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Hives& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Hives& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // hiveId Field Functions 
      bool hasHiveId() const { return this->hiveId_ != nullptr;};
      void deleteHiveId() { this->hiveId_ = nullptr;};
      inline string getHiveId() const { DARABONBA_PTR_GET_DEFAULT(hiveId_, "") };
      inline Hives& setHiveId(string hiveId) { DARABONBA_PTR_SET_VALUE(hiveId_, hiveId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Hives& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    protected:
      shared_ptr<string> creationTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> hiveId_ {};
      shared_ptr<string> name_ {};
    };

    virtual bool empty() const override { return this->hives_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // hives Field Functions 
    bool hasHives() const { return this->hives_ != nullptr;};
    void deleteHives() { this->hives_ = nullptr;};
    inline const vector<ListHivesResponseBody::Hives> & getHives() const { DARABONBA_PTR_GET_CONST(hives_, vector<ListHivesResponseBody::Hives>) };
    inline vector<ListHivesResponseBody::Hives> getHives() { DARABONBA_PTR_GET(hives_, vector<ListHivesResponseBody::Hives>) };
    inline ListHivesResponseBody& setHives(const vector<ListHivesResponseBody::Hives> & hives) { DARABONBA_PTR_SET_VALUE(hives_, hives) };
    inline ListHivesResponseBody& setHives(vector<ListHivesResponseBody::Hives> && hives) { DARABONBA_PTR_SET_RVALUE(hives_, hives) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHivesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListHivesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListHivesResponseBody::Hives>> hives_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
