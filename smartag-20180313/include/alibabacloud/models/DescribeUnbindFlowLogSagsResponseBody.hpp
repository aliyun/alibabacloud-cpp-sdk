// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNBINDFLOWLOGSAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNBINDFLOWLOGSAGSRESPONSEBODY_HPP_
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
  class DescribeUnbindFlowLogSagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUnbindFlowLogSagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Sags, sags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUnbindFlowLogSagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Sags, sags_);
    };
    DescribeUnbindFlowLogSagsResponseBody() = default ;
    DescribeUnbindFlowLogSagsResponseBody(const DescribeUnbindFlowLogSagsResponseBody &) = default ;
    DescribeUnbindFlowLogSagsResponseBody(DescribeUnbindFlowLogSagsResponseBody &&) = default ;
    DescribeUnbindFlowLogSagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUnbindFlowLogSagsResponseBody() = default ;
    DescribeUnbindFlowLogSagsResponseBody& operator=(const DescribeUnbindFlowLogSagsResponseBody &) = default ;
    DescribeUnbindFlowLogSagsResponseBody& operator=(DescribeUnbindFlowLogSagsResponseBody &&) = default ;
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

    virtual bool empty() const override { return this->count_ == nullptr
        && this->requestId_ == nullptr && this->sags_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeUnbindFlowLogSagsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUnbindFlowLogSagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sags Field Functions 
    bool hasSags() const { return this->sags_ != nullptr;};
    void deleteSags() { this->sags_ = nullptr;};
    inline const DescribeUnbindFlowLogSagsResponseBody::Sags & getSags() const { DARABONBA_PTR_GET_CONST(sags_, DescribeUnbindFlowLogSagsResponseBody::Sags) };
    inline DescribeUnbindFlowLogSagsResponseBody::Sags getSags() { DARABONBA_PTR_GET(sags_, DescribeUnbindFlowLogSagsResponseBody::Sags) };
    inline DescribeUnbindFlowLogSagsResponseBody& setSags(const DescribeUnbindFlowLogSagsResponseBody::Sags & sags) { DARABONBA_PTR_SET_VALUE(sags_, sags) };
    inline DescribeUnbindFlowLogSagsResponseBody& setSags(DescribeUnbindFlowLogSagsResponseBody::Sags && sags) { DARABONBA_PTR_SET_RVALUE(sags_, sags) };


  protected:
    // The total number of the SAG instances.
    shared_ptr<int32_t> count_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    shared_ptr<DescribeUnbindFlowLogSagsResponseBody::Sags> sags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
