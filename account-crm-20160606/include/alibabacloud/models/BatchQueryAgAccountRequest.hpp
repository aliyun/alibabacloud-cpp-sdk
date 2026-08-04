// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHQUERYAGACCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHQUERYAGACCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AccountCrm20160606
{
namespace Models
{
  class BatchQueryAgAccountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchQueryAgAccountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mpk, mpk_);
      DARABONBA_PTR_TO_JSON(PkList, pkList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchQueryAgAccountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mpk, mpk_);
      DARABONBA_PTR_FROM_JSON(PkList, pkList_);
    };
    BatchQueryAgAccountRequest() = default ;
    BatchQueryAgAccountRequest(const BatchQueryAgAccountRequest &) = default ;
    BatchQueryAgAccountRequest(BatchQueryAgAccountRequest &&) = default ;
    BatchQueryAgAccountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchQueryAgAccountRequest() = default ;
    BatchQueryAgAccountRequest& operator=(const BatchQueryAgAccountRequest &) = default ;
    BatchQueryAgAccountRequest& operator=(BatchQueryAgAccountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mpk_ == nullptr
        && this->pkList_ == nullptr; };
    // mpk Field Functions 
    bool hasMpk() const { return this->mpk_ != nullptr;};
    void deleteMpk() { this->mpk_ = nullptr;};
    inline string getMpk() const { DARABONBA_PTR_GET_DEFAULT(mpk_, "") };
    inline BatchQueryAgAccountRequest& setMpk(string mpk) { DARABONBA_PTR_SET_VALUE(mpk_, mpk) };


    // pkList Field Functions 
    bool hasPkList() const { return this->pkList_ != nullptr;};
    void deletePkList() { this->pkList_ = nullptr;};
    inline string getPkList() const { DARABONBA_PTR_GET_DEFAULT(pkList_, "") };
    inline BatchQueryAgAccountRequest& setPkList(string pkList) { DARABONBA_PTR_SET_VALUE(pkList_, pkList) };


  protected:
    // This parameter is required.
    shared_ptr<string> mpk_ {};
    // This parameter is required.
    shared_ptr<string> pkList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AccountCrm20160606
#endif
