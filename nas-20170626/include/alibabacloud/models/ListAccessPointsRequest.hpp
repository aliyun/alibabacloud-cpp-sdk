// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACCESSPOINTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACCESSPOINTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class ListAccessPointsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAccessPointsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListAccessPointsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListAccessPointsRequest() = default ;
    ListAccessPointsRequest(const ListAccessPointsRequest &) = default ;
    ListAccessPointsRequest(ListAccessPointsRequest &&) = default ;
    ListAccessPointsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAccessPointsRequest() = default ;
    ListAccessPointsRequest& operator=(const ListAccessPointsRequest &) = default ;
    ListAccessPointsRequest& operator=(ListAccessPointsRequest &&) = default ;
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

    virtual bool empty() const override { return this->fileSystemId_ == nullptr
        && this->filters_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline ListAccessPointsRequest& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<ListAccessPointsRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<ListAccessPointsRequest::Filters>) };
    inline vector<ListAccessPointsRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<ListAccessPointsRequest::Filters>) };
    inline ListAccessPointsRequest& setFilters(const vector<ListAccessPointsRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline ListAccessPointsRequest& setFilters(vector<ListAccessPointsRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAccessPointsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAccessPointsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // This parameter is required.
    shared_ptr<string> fileSystemId_ {};
    shared_ptr<vector<ListAccessPointsRequest::Filters>> filters_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
