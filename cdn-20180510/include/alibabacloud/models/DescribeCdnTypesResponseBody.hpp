// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNTYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNTYPESRESPONSEBODY_HPP_
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
  class DescribeCdnTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CdnTypes, cdnTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnTypes, cdnTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCdnTypesResponseBody() = default ;
    DescribeCdnTypesResponseBody(const DescribeCdnTypesResponseBody &) = default ;
    DescribeCdnTypesResponseBody(DescribeCdnTypesResponseBody &&) = default ;
    DescribeCdnTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnTypesResponseBody() = default ;
    DescribeCdnTypesResponseBody& operator=(const DescribeCdnTypesResponseBody &) = default ;
    DescribeCdnTypesResponseBody& operator=(DescribeCdnTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CdnTypes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CdnTypes& obj) { 
        DARABONBA_PTR_TO_JSON(CdnType, cdnType_);
      };
      friend void from_json(const Darabonba::Json& j, CdnTypes& obj) { 
        DARABONBA_PTR_FROM_JSON(CdnType, cdnType_);
      };
      CdnTypes() = default ;
      CdnTypes(const CdnTypes &) = default ;
      CdnTypes(CdnTypes &&) = default ;
      CdnTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CdnTypes() = default ;
      CdnTypes& operator=(const CdnTypes &) = default ;
      CdnTypes& operator=(CdnTypes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CdnType : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CdnType& obj) { 
          DARABONBA_PTR_TO_JSON(Desc, desc_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, CdnType& obj) { 
          DARABONBA_PTR_FROM_JSON(Desc, desc_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        CdnType() = default ;
        CdnType(const CdnType &) = default ;
        CdnType(CdnType &&) = default ;
        CdnType(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CdnType() = default ;
        CdnType& operator=(const CdnType &) = default ;
        CdnType& operator=(CdnType &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->desc_ == nullptr
        && this->type_ == nullptr; };
        // desc Field Functions 
        bool hasDesc() const { return this->desc_ != nullptr;};
        void deleteDesc() { this->desc_ = nullptr;};
        inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
        inline CdnType& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline CdnType& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> desc_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->cdnType_ == nullptr; };
      // cdnType Field Functions 
      bool hasCdnType() const { return this->cdnType_ != nullptr;};
      void deleteCdnType() { this->cdnType_ = nullptr;};
      inline const vector<CdnTypes::CdnType> & getCdnType() const { DARABONBA_PTR_GET_CONST(cdnType_, vector<CdnTypes::CdnType>) };
      inline vector<CdnTypes::CdnType> getCdnType() { DARABONBA_PTR_GET(cdnType_, vector<CdnTypes::CdnType>) };
      inline CdnTypes& setCdnType(const vector<CdnTypes::CdnType> & cdnType) { DARABONBA_PTR_SET_VALUE(cdnType_, cdnType) };
      inline CdnTypes& setCdnType(vector<CdnTypes::CdnType> && cdnType) { DARABONBA_PTR_SET_RVALUE(cdnType_, cdnType) };


    protected:
      shared_ptr<vector<CdnTypes::CdnType>> cdnType_ {};
    };

    virtual bool empty() const override { return this->cdnTypes_ == nullptr
        && this->requestId_ == nullptr; };
    // cdnTypes Field Functions 
    bool hasCdnTypes() const { return this->cdnTypes_ != nullptr;};
    void deleteCdnTypes() { this->cdnTypes_ = nullptr;};
    inline const DescribeCdnTypesResponseBody::CdnTypes & getCdnTypes() const { DARABONBA_PTR_GET_CONST(cdnTypes_, DescribeCdnTypesResponseBody::CdnTypes) };
    inline DescribeCdnTypesResponseBody::CdnTypes getCdnTypes() { DARABONBA_PTR_GET(cdnTypes_, DescribeCdnTypesResponseBody::CdnTypes) };
    inline DescribeCdnTypesResponseBody& setCdnTypes(const DescribeCdnTypesResponseBody::CdnTypes & cdnTypes) { DARABONBA_PTR_SET_VALUE(cdnTypes_, cdnTypes) };
    inline DescribeCdnTypesResponseBody& setCdnTypes(DescribeCdnTypesResponseBody::CdnTypes && cdnTypes) { DARABONBA_PTR_SET_RVALUE(cdnTypes_, cdnTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCdnTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeCdnTypesResponseBody::CdnTypes> cdnTypes_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
