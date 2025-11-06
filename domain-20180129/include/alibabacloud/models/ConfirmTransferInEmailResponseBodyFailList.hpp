// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMTRANSFERINEMAILRESPONSEBODYFAILLIST_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMTRANSFERINEMAILRESPONSEBODYFAILLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class ConfirmTransferInEmailResponseBodyFailList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmTransferInEmailResponseBodyFailList& obj) { 
      DARABONBA_PTR_TO_JSON(FailDomain, failDomain_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmTransferInEmailResponseBodyFailList& obj) { 
      DARABONBA_PTR_FROM_JSON(FailDomain, failDomain_);
    };
    ConfirmTransferInEmailResponseBodyFailList() = default ;
    ConfirmTransferInEmailResponseBodyFailList(const ConfirmTransferInEmailResponseBodyFailList &) = default ;
    ConfirmTransferInEmailResponseBodyFailList(ConfirmTransferInEmailResponseBodyFailList &&) = default ;
    ConfirmTransferInEmailResponseBodyFailList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmTransferInEmailResponseBodyFailList() = default ;
    ConfirmTransferInEmailResponseBodyFailList& operator=(const ConfirmTransferInEmailResponseBodyFailList &) = default ;
    ConfirmTransferInEmailResponseBodyFailList& operator=(ConfirmTransferInEmailResponseBodyFailList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->failDomain_ == nullptr; };
    // failDomain Field Functions 
    bool hasFailDomain() const { return this->failDomain_ != nullptr;};
    void deleteFailDomain() { this->failDomain_ = nullptr;};
    inline const vector<string> & failDomain() const { DARABONBA_PTR_GET_CONST(failDomain_, vector<string>) };
    inline vector<string> failDomain() { DARABONBA_PTR_GET(failDomain_, vector<string>) };
    inline ConfirmTransferInEmailResponseBodyFailList& setFailDomain(const vector<string> & failDomain) { DARABONBA_PTR_SET_VALUE(failDomain_, failDomain) };
    inline ConfirmTransferInEmailResponseBodyFailList& setFailDomain(vector<string> && failDomain) { DARABONBA_PTR_SET_RVALUE(failDomain_, failDomain) };


  protected:
    std::shared_ptr<vector<string>> failDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
