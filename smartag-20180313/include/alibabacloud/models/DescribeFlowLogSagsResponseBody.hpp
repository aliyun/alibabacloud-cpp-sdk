// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWLOGSAGSRESPONSEBODY_HPP_
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
  class DescribeFlowLogSagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowLogSagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sags, sags_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowLogSagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sags, sags_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeFlowLogSagsResponseBody() = default ;
    DescribeFlowLogSagsResponseBody(const DescribeFlowLogSagsResponseBody &) = default ;
    DescribeFlowLogSagsResponseBody(DescribeFlowLogSagsResponseBody &&) = default ;
    DescribeFlowLogSagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowLogSagsResponseBody() = default ;
    DescribeFlowLogSagsResponseBody& operator=(const DescribeFlowLogSagsResponseBody &) = default ;
    DescribeFlowLogSagsResponseBody& operator=(DescribeFlowLogSagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Sags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Sags& obj) { 
        DARABONBA_PTR_TO_JSON(Sag, sag_);
      };
      friend void from_json(const Darabonba::Json& j, Sags& obj) { 
        DARABONBA_PTR_FROM_JSON(Sag, sag_);
      };
      Sags() = default ;
      Sags(const Sags &) = default ;
      Sags(Sags &&) = default ;
      Sags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Sags() = default ;
      Sags& operator=(const Sags &) = default ;
      Sags& operator=(Sags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Sag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Sag& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(SmartAGId, smartAGId_);
        };
        friend void from_json(const Darabonba::Json& j, Sag& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(SmartAGId, smartAGId_);
        };
        Sag() = default ;
        Sag(const Sag &) = default ;
        Sag(Sag &&) = default ;
        Sag(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Sag() = default ;
        Sag& operator=(const Sag &) = default ;
        Sag& operator=(Sag &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->smartAGId_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Sag& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Sag& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // smartAGId Field Functions 
        bool hasSmartAGId() const { return this->smartAGId_ != nullptr;};
        void deleteSmartAGId() { this->smartAGId_ = nullptr;};
        inline string getSmartAGId() const { DARABONBA_PTR_GET_DEFAULT(smartAGId_, "") };
        inline Sag& setSmartAGId(string smartAGId) { DARABONBA_PTR_SET_VALUE(smartAGId_, smartAGId) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> smartAGId_ {};
      };

      virtual bool empty() const override { return this->sag_ == nullptr; };
      // sag Field Functions 
      bool hasSag() const { return this->sag_ != nullptr;};
      void deleteSag() { this->sag_ = nullptr;};
      inline const vector<Sags::Sag> & getSag() const { DARABONBA_PTR_GET_CONST(sag_, vector<Sags::Sag>) };
      inline vector<Sags::Sag> getSag() { DARABONBA_PTR_GET(sag_, vector<Sags::Sag>) };
      inline Sags& setSag(const vector<Sags::Sag> & sag) { DARABONBA_PTR_SET_VALUE(sag_, sag) };
      inline Sags& setSag(vector<Sags::Sag> && sag) { DARABONBA_PTR_SET_RVALUE(sag_, sag) };


    protected:
      shared_ptr<vector<Sags::Sag>> sag_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->sags_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeFlowLogSagsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeFlowLogSagsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFlowLogSagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sags Field Functions 
    bool hasSags() const { return this->sags_ != nullptr;};
    void deleteSags() { this->sags_ = nullptr;};
    inline const DescribeFlowLogSagsResponseBody::Sags & getSags() const { DARABONBA_PTR_GET_CONST(sags_, DescribeFlowLogSagsResponseBody::Sags) };
    inline DescribeFlowLogSagsResponseBody::Sags getSags() { DARABONBA_PTR_GET(sags_, DescribeFlowLogSagsResponseBody::Sags) };
    inline DescribeFlowLogSagsResponseBody& setSags(const DescribeFlowLogSagsResponseBody::Sags & sags) { DARABONBA_PTR_SET_VALUE(sags_, sags) };
    inline DescribeFlowLogSagsResponseBody& setSags(DescribeFlowLogSagsResponseBody::Sags && sags) { DARABONBA_PTR_SET_RVALUE(sags_, sags) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeFlowLogSagsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The current page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries on the current page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeFlowLogSagsResponseBody::Sags> sags_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
