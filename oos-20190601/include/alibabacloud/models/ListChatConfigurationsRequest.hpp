// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHATCONFIGURATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCHATCONFIGURATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListChatConfigurationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChatConfigurationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListChatConfigurationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListChatConfigurationsRequest() = default ;
    ListChatConfigurationsRequest(const ListChatConfigurationsRequest &) = default ;
    ListChatConfigurationsRequest(ListChatConfigurationsRequest &&) = default ;
    ListChatConfigurationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChatConfigurationsRequest() = default ;
    ListChatConfigurationsRequest& operator=(const ListChatConfigurationsRequest &) = default ;
    ListChatConfigurationsRequest& operator=(ListChatConfigurationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filters() = default ;
      Filters(const Filters &) = default ;
      Filters(Filters &&) = default ;
      Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filters() = default ;
      Filters& operator=(const Filters &) = default ;
      Filters& operator=(Filters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Filters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Filters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      shared_ptr<string> name_ {};
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->filters_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr; };
    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<ListChatConfigurationsRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<ListChatConfigurationsRequest::Filters>) };
    inline vector<ListChatConfigurationsRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<ListChatConfigurationsRequest::Filters>) };
    inline ListChatConfigurationsRequest& setFilters(const vector<ListChatConfigurationsRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline ListChatConfigurationsRequest& setFilters(vector<ListChatConfigurationsRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListChatConfigurationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListChatConfigurationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListChatConfigurationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<vector<ListChatConfigurationsRequest::Filters>> filters_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
