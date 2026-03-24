// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEESEXCEPTIONDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEESEXCEPTIONDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeEsExceptionDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEsExceptionDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Contents, contents_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEsExceptionDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Contents, contents_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEsExceptionDataResponseBody() = default ;
    DescribeEsExceptionDataResponseBody(const DescribeEsExceptionDataResponseBody &) = default ;
    DescribeEsExceptionDataResponseBody(DescribeEsExceptionDataResponseBody &&) = default ;
    DescribeEsExceptionDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEsExceptionDataResponseBody() = default ;
    DescribeEsExceptionDataResponseBody& operator=(const DescribeEsExceptionDataResponseBody &) = default ;
    DescribeEsExceptionDataResponseBody& operator=(DescribeEsExceptionDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Contents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Contents& obj) { 
        DARABONBA_PTR_TO_JSON(Columns, columns_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Points, points_);
      };
      friend void from_json(const Darabonba::Json& j, Contents& obj) { 
        DARABONBA_PTR_FROM_JSON(Columns, columns_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Points, points_);
      };
      Contents() = default ;
      Contents(const Contents &) = default ;
      Contents(Contents &&) = default ;
      Contents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Contents() = default ;
      Contents& operator=(const Contents &) = default ;
      Contents& operator=(Contents &&) = default ;
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
      inline Contents& setColumns(const vector<string> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
      inline Contents& setColumns(vector<string> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Contents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // points Field Functions 
      bool hasPoints() const { return this->points_ != nullptr;};
      void deletePoints() { this->points_ = nullptr;};
      inline const vector<string> & getPoints() const { DARABONBA_PTR_GET_CONST(points_, vector<string>) };
      inline vector<string> getPoints() { DARABONBA_PTR_GET(points_, vector<string>) };
      inline Contents& setPoints(const vector<string> & points) { DARABONBA_PTR_SET_VALUE(points_, points) };
      inline Contents& setPoints(vector<string> && points) { DARABONBA_PTR_SET_RVALUE(points_, points) };


    protected:
      // Information about the time column and the error column name.
      shared_ptr<vector<string>> columns_ {};
      // The name of the table that shows the errors of the script.
      shared_ptr<string> name_ {};
      // The time columns and error column names.
      shared_ptr<vector<string>> points_ {};
    };

    virtual bool empty() const override { return this->contents_ == nullptr
        && this->requestId_ == nullptr; };
    // contents Field Functions 
    bool hasContents() const { return this->contents_ != nullptr;};
    void deleteContents() { this->contents_ = nullptr;};
    inline const vector<DescribeEsExceptionDataResponseBody::Contents> & getContents() const { DARABONBA_PTR_GET_CONST(contents_, vector<DescribeEsExceptionDataResponseBody::Contents>) };
    inline vector<DescribeEsExceptionDataResponseBody::Contents> getContents() { DARABONBA_PTR_GET(contents_, vector<DescribeEsExceptionDataResponseBody::Contents>) };
    inline DescribeEsExceptionDataResponseBody& setContents(const vector<DescribeEsExceptionDataResponseBody::Contents> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
    inline DescribeEsExceptionDataResponseBody& setContents(vector<DescribeEsExceptionDataResponseBody::Contents> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEsExceptionDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The content of the script for which an error was reported.
    shared_ptr<vector<DescribeEsExceptionDataResponseBody::Contents>> contents_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
