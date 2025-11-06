// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSFERINCHECKMAILTOKENRESPONSEBODYSUCCESSLIST_HPP_
#define ALIBABACLOUD_MODELS_TRANSFERINCHECKMAILTOKENRESPONSEBODYSUCCESSLIST_HPP_
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
  class TransferInCheckMailTokenResponseBodySuccessList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransferInCheckMailTokenResponseBodySuccessList& obj) { 
      DARABONBA_PTR_TO_JSON(SuccessDomain, successDomain_);
    };
    friend void from_json(const Darabonba::Json& j, TransferInCheckMailTokenResponseBodySuccessList& obj) { 
      DARABONBA_PTR_FROM_JSON(SuccessDomain, successDomain_);
    };
    TransferInCheckMailTokenResponseBodySuccessList() = default ;
    TransferInCheckMailTokenResponseBodySuccessList(const TransferInCheckMailTokenResponseBodySuccessList &) = default ;
    TransferInCheckMailTokenResponseBodySuccessList(TransferInCheckMailTokenResponseBodySuccessList &&) = default ;
    TransferInCheckMailTokenResponseBodySuccessList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransferInCheckMailTokenResponseBodySuccessList() = default ;
    TransferInCheckMailTokenResponseBodySuccessList& operator=(const TransferInCheckMailTokenResponseBodySuccessList &) = default ;
    TransferInCheckMailTokenResponseBodySuccessList& operator=(TransferInCheckMailTokenResponseBodySuccessList &&) = default ;
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
    inline TransferInCheckMailTokenResponseBodySuccessList& setSuccessDomain(const vector<string> & successDomain) { DARABONBA_PTR_SET_VALUE(successDomain_, successDomain) };
    inline TransferInCheckMailTokenResponseBodySuccessList& setSuccessDomain(vector<string> && successDomain) { DARABONBA_PTR_SET_RVALUE(successDomain_, successDomain) };


  protected:
    std::shared_ptr<vector<string>> successDomain_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
