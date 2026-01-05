// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINWITHINTEGRITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINWITHINTEGRITYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeDomainWithIntegrityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainWithIntegrityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainWithIntegrityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDomainWithIntegrityResponseBody() = default ;
    DescribeDomainWithIntegrityResponseBody(const DescribeDomainWithIntegrityResponseBody &) = default ;
    DescribeDomainWithIntegrityResponseBody(DescribeDomainWithIntegrityResponseBody &&) = default ;
    DescribeDomainWithIntegrityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainWithIntegrityResponseBody() = default ;
    DescribeDomainWithIntegrityResponseBody& operator=(const DescribeDomainWithIntegrityResponseBody &) = default ;
    DescribeDomainWithIntegrityResponseBody& operator=(DescribeDomainWithIntegrityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Content : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Content& obj) { 
        DARABONBA_PTR_TO_JSON(Columns, columns_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Points, points_);
      };
      friend void from_json(const Darabonba::Json& j, Content& obj) { 
        DARABONBA_PTR_FROM_JSON(Columns, columns_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Points, points_);
      };
      Content() = default ;
      Content(const Content &) = default ;
      Content(Content &&) = default ;
      Content(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Content() = default ;
      Content& operator=(const Content &) = default ;
      Content& operator=(Content &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->columns_ == nullptr
        && this->name_ == nullptr && this->points_ == nullptr; };
      // columns Field Functions 
      bool hasColumns() const { return this->columns_ != nullptr;};
      void deleteColumns() { this->columns_ = nullptr;};
      inline const vector<string> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<string>) };
      inline vector<string> getColumns() { DARABONBA_PTR_GET(columns_, vector<string>) };
      inline Content& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
      inline Content& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Content& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // points Field Functions 
      bool hasPoints() const { return this->points_ != nullptr;};
      void deletePoints() { this->points_ = nullptr;};
      inline const vector<string> & getPoints() const { DARABONBA_PTR_GET_CONST(points_, vector<string>) };
      inline vector<string> getPoints() { DARABONBA_PTR_GET(points_, vector<string>) };
      inline Content& setPoints(const vector<string> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
      inline Content& setPoints(vector<string> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


    protected:
      // The column names.
      shared_ptr<vector<string>> columns_ {};
      // The table name.
      shared_ptr<string> name_ {};
      // The subpoints.
      shared_ptr<vector<string>> points_ {};
    };

    virtual bool empty() const override { return this->content_ == nullptr
        && this->requestId_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const vector<DescribeDomainWithIntegrityResponseBody::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<DescribeDomainWithIntegrityResponseBody::Content>) };
    inline vector<DescribeDomainWithIntegrityResponseBody::Content> getContent() { DARABONBA_PTR_GET(content_, vector<DescribeDomainWithIntegrityResponseBody::Content>) };
    inline DescribeDomainWithIntegrityResponseBody& setContent(const vector<DescribeDomainWithIntegrityResponseBody::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline DescribeDomainWithIntegrityResponseBody& setContent(vector<DescribeDomainWithIntegrityResponseBody::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainWithIntegrityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The verification information.
    shared_ptr<vector<DescribeDomainWithIntegrityResponseBody::Content>> content_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
