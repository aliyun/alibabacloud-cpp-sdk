// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIRMTRANSFERINEMAILRESPONSEBODYSUCCESSLIST_HPP_
#define ALIBABACLOUD_MODELS_CONFIRMTRANSFERINEMAILRESPONSEBODYSUCCESSLIST_HPP_
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
  class ConfirmTransferInEmailResponseBodySuccessList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfirmTransferInEmailResponseBodySuccessList& obj) { 
      DARABONBA_PTR_TO_JSON(SuccessDomain, successDomain_);
    };
    friend void from_json(const Darabonba::Json& j, ConfirmTransferInEmailResponseBodySuccessList& obj) { 
      DARABONBA_PTR_FROM_JSON(SuccessDomain, successDomain_);
    };
    ConfirmTransferInEmailResponseBodySuccessList() = default ;
    ConfirmTransferInEmailResponseBodySuccessList(const ConfirmTransferInEmailResponseBodySuccessList &) = default ;
    ConfirmTransferInEmailResponseBodySuccessList(ConfirmTransferInEmailResponseBodySuccessList &&) = default ;
    ConfirmTransferInEmailResponseBodySuccessList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfirmTransferInEmailResponseBodySuccessList() = default ;
    ConfirmTransferInEmailResponseBodySuccessList& operator=(const ConfirmTransferInEmailResponseBodySuccessList &) = default ;
    ConfirmTransferInEmailResponseBodySuccessList& operator=(ConfirmTransferInEmailResponseBodySuccessList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->successDomain_ == nullptr; };
    // successDomain Field Functions 
    bool hasSuccessDomain() const { return this->successDomain_ != nullptr;};
    void deleteSuccessDomain() { this->successDomain_ = nullptr;};
    inline const vector<string> & successDomain() const { DARABONBA_PTR_GET_CONST(successDomain_, vector<string>) };
    inline vector<string> successDomain() { DARABONBA_PTR_GET(successDomain_, vector<string>) };
    inline ConfirmTransferInEmailResponseBodySuccessList& setSuccessDomain(const vector<string> & successDomain) { DARABONBA_PTR_SET_VALUE(successDomain_, successDomain) };
    inline ConfirmTransferInEmailResponseBodySuccessList& setSuccessDomain(vector<string> && successDomain) { DARABONBA_PTR_SET_RVALUE(successDomain_, successDomain) };


  protected:
    std::shared_ptr<vector<string>> successDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
