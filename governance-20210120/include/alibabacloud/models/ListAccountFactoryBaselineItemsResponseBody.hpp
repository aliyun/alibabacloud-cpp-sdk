// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCOUNTFACTORYBASELINEITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACCOUNTFACTORYBASELINEITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListAccountFactoryBaselineItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccountFactoryBaselineItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccountFactoryBaselineItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BaselineItems, baselineItems_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAccountFactoryBaselineItemsResponseBody() = default ;
    ListAccountFactoryBaselineItemsResponseBody(const ListAccountFactoryBaselineItemsResponseBody &) = default ;
    ListAccountFactoryBaselineItemsResponseBody(ListAccountFactoryBaselineItemsResponseBody &&) = default ;
    ListAccountFactoryBaselineItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccountFactoryBaselineItemsResponseBody() = default ;
    ListAccountFactoryBaselineItemsResponseBody& operator=(const ListAccountFactoryBaselineItemsResponseBody &) = default ;
    ListAccountFactoryBaselineItemsResponseBody& operator=(ListAccountFactoryBaselineItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BaselineItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BaselineItems& obj) { 
        DARABONBA_PTR_TO_JSON(DependsOn, dependsOn_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, BaselineItems& obj) { 
        DARABONBA_PTR_FROM_JSON(DependsOn, dependsOn_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      BaselineItems() = default ;
      BaselineItems(const BaselineItems &) = default ;
      BaselineItems(BaselineItems &&) = default ;
      BaselineItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BaselineItems() = default ;
      BaselineItems& operator=(const BaselineItems &) = default ;
      BaselineItems& operator=(BaselineItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DependsOn : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DependsOn& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, DependsOn& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        DependsOn() = default ;
        DependsOn(const DependsOn &) = default ;
        DependsOn(DependsOn &&) = default ;
        DependsOn(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DependsOn() = default ;
        DependsOn& operator=(const DependsOn &) = default ;
        DependsOn& operator=(DependsOn &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr && this->version_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DependsOn& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DependsOn& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline DependsOn& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // The name of the baseline item.
        shared_ptr<string> name_ {};
        // The type of the baseline item.
        shared_ptr<string> type_ {};
        // The version of the baseline item.
        shared_ptr<string> version_ {};
      };

      virtual bool empty() const override { return this->dependsOn_ == nullptr
        && this->description_ == nullptr && this->name_ == nullptr && this->type_ == nullptr && this->version_ == nullptr; };
      // dependsOn Field Functions 
      bool hasDependsOn() const { return this->dependsOn_ != nullptr;};
      void deleteDependsOn() { this->dependsOn_ = nullptr;};
      inline const vector<BaselineItems::DependsOn> & getDependsOn() const { DARABONBA_PTR_GET_CONST(dependsOn_, vector<BaselineItems::DependsOn>) };
      inline vector<BaselineItems::DependsOn> getDependsOn() { DARABONBA_PTR_GET(dependsOn_, vector<BaselineItems::DependsOn>) };
      inline BaselineItems& setDependsOn(const vector<BaselineItems::DependsOn> & dependsOn) { DARABONBA_PTR_SET_VALUE(dependsOn_, dependsOn) };
      inline BaselineItems& setDependsOn(vector<BaselineItems::DependsOn> && dependsOn) { DARABONBA_PTR_SET_RVALUE(dependsOn_, dependsOn) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline BaselineItems& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline BaselineItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline BaselineItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline BaselineItems& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      // The dependency of the baseline item.
      shared_ptr<vector<BaselineItems::DependsOn>> dependsOn_ {};
      // The description of the baseline item.
      shared_ptr<string> description_ {};
      // The name of the baseline item.
      shared_ptr<string> name_ {};
      // The type of the baseline item.
      shared_ptr<string> type_ {};
      // The version of the baseline item.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->baselineItems_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // baselineItems Field Functions 
    bool hasBaselineItems() const { return this->baselineItems_ != nullptr;};
    void deleteBaselineItems() { this->baselineItems_ = nullptr;};
    inline const vector<ListAccountFactoryBaselineItemsResponseBody::BaselineItems> & getBaselineItems() const { DARABONBA_PTR_GET_CONST(baselineItems_, vector<ListAccountFactoryBaselineItemsResponseBody::BaselineItems>) };
    inline vector<ListAccountFactoryBaselineItemsResponseBody::BaselineItems> getBaselineItems() { DARABONBA_PTR_GET(baselineItems_, vector<ListAccountFactoryBaselineItemsResponseBody::BaselineItems>) };
    inline ListAccountFactoryBaselineItemsResponseBody& setBaselineItems(const vector<ListAccountFactoryBaselineItemsResponseBody::BaselineItems> & baselineItems) { DARABONBA_PTR_SET_VALUE(baselineItems_, baselineItems) };
    inline ListAccountFactoryBaselineItemsResponseBody& setBaselineItems(vector<ListAccountFactoryBaselineItemsResponseBody::BaselineItems> && baselineItems) { DARABONBA_PTR_SET_RVALUE(baselineItems_, baselineItems) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAccountFactoryBaselineItemsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAccountFactoryBaselineItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The baseline items.
    shared_ptr<vector<ListAccountFactoryBaselineItemsResponseBody::BaselineItems>> baselineItems_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
