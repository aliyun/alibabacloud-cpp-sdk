// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMSYSTEMLINESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMSYSTEMLINESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmSystemLinesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmSystemLinesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SystemLines, systemLines_);
      DARABONBA_PTR_TO_JSON(SystemLinesTree, systemLinesTree_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmSystemLinesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SystemLines, systemLines_);
      DARABONBA_PTR_FROM_JSON(SystemLinesTree, systemLinesTree_);
    };
    DescribeCloudGtmSystemLinesResponseBody() = default ;
    DescribeCloudGtmSystemLinesResponseBody(const DescribeCloudGtmSystemLinesResponseBody &) = default ;
    DescribeCloudGtmSystemLinesResponseBody(DescribeCloudGtmSystemLinesResponseBody &&) = default ;
    DescribeCloudGtmSystemLinesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmSystemLinesResponseBody() = default ;
    DescribeCloudGtmSystemLinesResponseBody& operator=(const DescribeCloudGtmSystemLinesResponseBody &) = default ;
    DescribeCloudGtmSystemLinesResponseBody& operator=(DescribeCloudGtmSystemLinesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SystemLines : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemLines& obj) { 
        DARABONBA_PTR_TO_JSON(SystemLine, systemLine_);
      };
      friend void from_json(const Darabonba::Json& j, SystemLines& obj) { 
        DARABONBA_PTR_FROM_JSON(SystemLine, systemLine_);
      };
      SystemLines() = default ;
      SystemLines(const SystemLines &) = default ;
      SystemLines(SystemLines &&) = default ;
      SystemLines(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemLines() = default ;
      SystemLines& operator=(const SystemLines &) = default ;
      SystemLines& operator=(SystemLines &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SystemLine : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SystemLine& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(IsAvailable, isAvailable_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ParentCode, parentCode_);
        };
        friend void from_json(const Darabonba::Json& j, SystemLine& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(IsAvailable, isAvailable_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ParentCode, parentCode_);
        };
        SystemLine() = default ;
        SystemLine(const SystemLine &) = default ;
        SystemLine(SystemLine &&) = default ;
        SystemLine(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SystemLine() = default ;
        SystemLine& operator=(const SystemLine &) = default ;
        SystemLine& operator=(SystemLine &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->displayName_ == nullptr && this->isAvailable_ == nullptr && this->name_ == nullptr && this->parentCode_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline SystemLine& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline SystemLine& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // isAvailable Field Functions 
        bool hasIsAvailable() const { return this->isAvailable_ != nullptr;};
        void deleteIsAvailable() { this->isAvailable_ = nullptr;};
        inline bool getIsAvailable() const { DARABONBA_PTR_GET_DEFAULT(isAvailable_, false) };
        inline SystemLine& setIsAvailable(bool isAvailable) { DARABONBA_PTR_SET_VALUE(isAvailable_, isAvailable) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline SystemLine& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // parentCode Field Functions 
        bool hasParentCode() const { return this->parentCode_ != nullptr;};
        void deleteParentCode() { this->parentCode_ = nullptr;};
        inline string getParentCode() const { DARABONBA_PTR_GET_DEFAULT(parentCode_, "") };
        inline SystemLine& setParentCode(string parentCode) { DARABONBA_PTR_SET_VALUE(parentCode_, parentCode) };


      protected:
        // The line code.
        shared_ptr<string> code_ {};
        // The display name of the line.
        shared_ptr<string> displayName_ {};
        // Indicates whether the line can be selected as the source of a Domain Name System (DNS) request. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> isAvailable_ {};
        // The name of the line.
        shared_ptr<string> name_ {};
        // The code of the parent line.
        shared_ptr<string> parentCode_ {};
      };

      virtual bool empty() const override { return this->systemLine_ == nullptr; };
      // systemLine Field Functions 
      bool hasSystemLine() const { return this->systemLine_ != nullptr;};
      void deleteSystemLine() { this->systemLine_ = nullptr;};
      inline const vector<SystemLines::SystemLine> & getSystemLine() const { DARABONBA_PTR_GET_CONST(systemLine_, vector<SystemLines::SystemLine>) };
      inline vector<SystemLines::SystemLine> getSystemLine() { DARABONBA_PTR_GET(systemLine_, vector<SystemLines::SystemLine>) };
      inline SystemLines& setSystemLine(const vector<SystemLines::SystemLine> & systemLine) { DARABONBA_PTR_SET_VALUE(systemLine_, systemLine) };
      inline SystemLines& setSystemLine(vector<SystemLines::SystemLine> && systemLine) { DARABONBA_PTR_SET_RVALUE(systemLine_, systemLine) };


    protected:
      shared_ptr<vector<SystemLines::SystemLine>> systemLine_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->systemLines_ == nullptr && this->systemLinesTree_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCloudGtmSystemLinesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // systemLines Field Functions 
    bool hasSystemLines() const { return this->systemLines_ != nullptr;};
    void deleteSystemLines() { this->systemLines_ = nullptr;};
    inline const DescribeCloudGtmSystemLinesResponseBody::SystemLines & getSystemLines() const { DARABONBA_PTR_GET_CONST(systemLines_, DescribeCloudGtmSystemLinesResponseBody::SystemLines) };
    inline DescribeCloudGtmSystemLinesResponseBody::SystemLines getSystemLines() { DARABONBA_PTR_GET(systemLines_, DescribeCloudGtmSystemLinesResponseBody::SystemLines) };
    inline DescribeCloudGtmSystemLinesResponseBody& setSystemLines(const DescribeCloudGtmSystemLinesResponseBody::SystemLines & systemLines) { DARABONBA_PTR_SET_VALUE(systemLines_, systemLines) };
    inline DescribeCloudGtmSystemLinesResponseBody& setSystemLines(DescribeCloudGtmSystemLinesResponseBody::SystemLines && systemLines) { DARABONBA_PTR_SET_RVALUE(systemLines_, systemLines) };


    // systemLinesTree Field Functions 
    bool hasSystemLinesTree() const { return this->systemLinesTree_ != nullptr;};
    void deleteSystemLinesTree() { this->systemLinesTree_ = nullptr;};
    inline string getSystemLinesTree() const { DARABONBA_PTR_GET_DEFAULT(systemLinesTree_, "") };
    inline DescribeCloudGtmSystemLinesResponseBody& setSystemLinesTree(string systemLinesTree) { DARABONBA_PTR_SET_VALUE(systemLinesTree_, systemLinesTree) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The system lines.
    shared_ptr<DescribeCloudGtmSystemLinesResponseBody::SystemLines> systemLines_ {};
    // The system lines, which are in a tree structure. Only a system line is listed in this example.
    shared_ptr<string> systemLinesTree_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
