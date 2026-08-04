// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCUSTOMERLABELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCUSTOMERLABELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class QueryCustomerLabelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCustomerLabelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LabelSeries, labelSeries_);
      DARABONBA_PTR_TO_JSON(PK, PK_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCustomerLabelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LabelSeries, labelSeries_);
      DARABONBA_PTR_FROM_JSON(PK, PK_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    QueryCustomerLabelRequest() = default ;
    QueryCustomerLabelRequest(const QueryCustomerLabelRequest &) = default ;
    QueryCustomerLabelRequest(QueryCustomerLabelRequest &&) = default ;
    QueryCustomerLabelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCustomerLabelRequest() = default ;
    QueryCustomerLabelRequest& operator=(const QueryCustomerLabelRequest &) = default ;
    QueryCustomerLabelRequest& operator=(QueryCustomerLabelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->labelSeries_ == nullptr
        && this->PK_ == nullptr && this->token_ == nullptr; };
    // labelSeries Field Functions 
    bool hasLabelSeries() const { return this->labelSeries_ != nullptr;};
    void deleteLabelSeries() { this->labelSeries_ = nullptr;};
    inline string getLabelSeries() const { DARABONBA_PTR_GET_DEFAULT(labelSeries_, "") };
    inline QueryCustomerLabelRequest& setLabelSeries(string labelSeries) { DARABONBA_PTR_SET_VALUE(labelSeries_, labelSeries) };


    // PK Field Functions 
    bool hasPK() const { return this->PK_ != nullptr;};
    void deletePK() { this->PK_ = nullptr;};
    inline int64_t getPK() const { DARABONBA_PTR_GET_DEFAULT(PK_, 0L) };
    inline QueryCustomerLabelRequest& setPK(int64_t PK) { DARABONBA_PTR_SET_VALUE(PK_, PK) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline QueryCustomerLabelRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    shared_ptr<string> labelSeries_ {};
    // This parameter is required.
    shared_ptr<int64_t> PK_ {};
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
