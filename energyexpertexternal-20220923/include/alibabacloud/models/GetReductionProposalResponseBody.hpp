// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREDUCTIONPROPOSALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREDUCTIONPROPOSALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class GetReductionProposalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReductionProposalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetReductionProposalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetReductionProposalResponseBody() = default ;
    GetReductionProposalResponseBody(const GetReductionProposalResponseBody &) = default ;
    GetReductionProposalResponseBody(GetReductionProposalResponseBody &&) = default ;
    GetReductionProposalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReductionProposalResponseBody() = default ;
    GetReductionProposalResponseBody& operator=(const GetReductionProposalResponseBody &) = default ;
    GetReductionProposalResponseBody& operator=(GetReductionProposalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(reduction, reduction_);
        DARABONBA_PTR_TO_JSON(reductionEvaluation, reductionEvaluation_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(reduction, reduction_);
        DARABONBA_PTR_FROM_JSON(reductionEvaluation, reductionEvaluation_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->reduction_ == nullptr
        && this->reductionEvaluation_ == nullptr; };
      // reduction Field Functions 
      bool hasReduction() const { return this->reduction_ != nullptr;};
      void deleteReduction() { this->reduction_ = nullptr;};
      inline string getReduction() const { DARABONBA_PTR_GET_DEFAULT(reduction_, "") };
      inline Data& setReduction(string reduction) { DARABONBA_PTR_SET_VALUE(reduction_, reduction) };


      // reductionEvaluation Field Functions 
      bool hasReductionEvaluation() const { return this->reductionEvaluation_ != nullptr;};
      void deleteReductionEvaluation() { this->reductionEvaluation_ = nullptr;};
      inline string getReductionEvaluation() const { DARABONBA_PTR_GET_DEFAULT(reductionEvaluation_, "") };
      inline Data& setReductionEvaluation(string reductionEvaluation) { DARABONBA_PTR_SET_VALUE(reductionEvaluation_, reductionEvaluation) };


    protected:
      // Proactive carbon reduction recommendations and advice.
      shared_ptr<string> reduction_ {};
      // Active carbon reduction assessment.
      shared_ptr<string> reductionEvaluation_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetReductionProposalResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetReductionProposalResponseBody::Data) };
    inline GetReductionProposalResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetReductionProposalResponseBody::Data) };
    inline GetReductionProposalResponseBody& setData(const GetReductionProposalResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetReductionProposalResponseBody& setData(GetReductionProposalResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetReductionProposalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetReductionProposalResponseBody::Data> data_ {};
    // The ID of the request. The value is unique for each request. This facilitates subsequent troubleshooting.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
