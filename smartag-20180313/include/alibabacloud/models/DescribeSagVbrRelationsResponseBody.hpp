// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESAGVBRRELATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESAGVBRRELATIONSRESPONSEBODY_HPP_
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
  class DescribeSagVbrRelationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSagVbrRelationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SagVbrRelations, sagVbrRelations_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSagVbrRelationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SagVbrRelations, sagVbrRelations_);
    };
    DescribeSagVbrRelationsResponseBody() = default ;
    DescribeSagVbrRelationsResponseBody(const DescribeSagVbrRelationsResponseBody &) = default ;
    DescribeSagVbrRelationsResponseBody(DescribeSagVbrRelationsResponseBody &&) = default ;
    DescribeSagVbrRelationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSagVbrRelationsResponseBody() = default ;
    DescribeSagVbrRelationsResponseBody& operator=(const DescribeSagVbrRelationsResponseBody &) = default ;
    DescribeSagVbrRelationsResponseBody& operator=(DescribeSagVbrRelationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SagVbrRelations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SagVbrRelations& obj) { 
        DARABONBA_PTR_TO_JSON(SagInstanceId, sagInstanceId_);
        DARABONBA_PTR_TO_JSON(SagUid, sagUid_);
        DARABONBA_PTR_TO_JSON(VbrInstanceId, vbrInstanceId_);
      };
      friend void from_json(const Darabonba::Json& j, SagVbrRelations& obj) { 
        DARABONBA_PTR_FROM_JSON(SagInstanceId, sagInstanceId_);
        DARABONBA_PTR_FROM_JSON(SagUid, sagUid_);
        DARABONBA_PTR_FROM_JSON(VbrInstanceId, vbrInstanceId_);
      };
      SagVbrRelations() = default ;
      SagVbrRelations(const SagVbrRelations &) = default ;
      SagVbrRelations(SagVbrRelations &&) = default ;
      SagVbrRelations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SagVbrRelations() = default ;
      SagVbrRelations& operator=(const SagVbrRelations &) = default ;
      SagVbrRelations& operator=(SagVbrRelations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->sagInstanceId_ == nullptr
        && this->sagUid_ == nullptr && this->vbrInstanceId_ == nullptr; };
      // sagInstanceId Field Functions 
      bool hasSagInstanceId() const { return this->sagInstanceId_ != nullptr;};
      void deleteSagInstanceId() { this->sagInstanceId_ = nullptr;};
      inline string getSagInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sagInstanceId_, "") };
      inline SagVbrRelations& setSagInstanceId(string sagInstanceId) { DARABONBA_PTR_SET_VALUE(sagInstanceId_, sagInstanceId) };


      // sagUid Field Functions 
      bool hasSagUid() const { return this->sagUid_ != nullptr;};
      void deleteSagUid() { this->sagUid_ = nullptr;};
      inline string getSagUid() const { DARABONBA_PTR_GET_DEFAULT(sagUid_, "") };
      inline SagVbrRelations& setSagUid(string sagUid) { DARABONBA_PTR_SET_VALUE(sagUid_, sagUid) };


      // vbrInstanceId Field Functions 
      bool hasVbrInstanceId() const { return this->vbrInstanceId_ != nullptr;};
      void deleteVbrInstanceId() { this->vbrInstanceId_ = nullptr;};
      inline string getVbrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vbrInstanceId_, "") };
      inline SagVbrRelations& setVbrInstanceId(string vbrInstanceId) { DARABONBA_PTR_SET_VALUE(vbrInstanceId_, vbrInstanceId) };


    protected:
      // The ID of the SAG instance.
      shared_ptr<string> sagInstanceId_ {};
      // The ID of the Alibaba Cloud account to which the SAG instance belongs.
      shared_ptr<string> sagUid_ {};
      // The ID of the VBR.
      shared_ptr<string> vbrInstanceId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sagVbrRelations_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSagVbrRelationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sagVbrRelations Field Functions 
    bool hasSagVbrRelations() const { return this->sagVbrRelations_ != nullptr;};
    void deleteSagVbrRelations() { this->sagVbrRelations_ = nullptr;};
    inline const vector<DescribeSagVbrRelationsResponseBody::SagVbrRelations> & getSagVbrRelations() const { DARABONBA_PTR_GET_CONST(sagVbrRelations_, vector<DescribeSagVbrRelationsResponseBody::SagVbrRelations>) };
    inline vector<DescribeSagVbrRelationsResponseBody::SagVbrRelations> getSagVbrRelations() { DARABONBA_PTR_GET(sagVbrRelations_, vector<DescribeSagVbrRelationsResponseBody::SagVbrRelations>) };
    inline DescribeSagVbrRelationsResponseBody& setSagVbrRelations(const vector<DescribeSagVbrRelationsResponseBody::SagVbrRelations> & sagVbrRelations) { DARABONBA_PTR_SET_VALUE(sagVbrRelations_, sagVbrRelations) };
    inline DescribeSagVbrRelationsResponseBody& setSagVbrRelations(vector<DescribeSagVbrRelationsResponseBody::SagVbrRelations> && sagVbrRelations) { DARABONBA_PTR_SET_RVALUE(sagVbrRelations_, sagVbrRelations) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the specified VBR is associated with an SAG instance.
    shared_ptr<vector<DescribeSagVbrRelationsResponseBody::SagVbrRelations>> sagVbrRelations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
