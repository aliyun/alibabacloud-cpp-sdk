// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESETADDACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEPIPELINESRESPONSEBODYIMAGEPIPELINEIMAGEPIPELINESETADDACCOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(AddAccount, addAccount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(AddAccount, addAccount_);
    };
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts &&) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts() = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts& operator=(const DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts &) = default ;
    DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts& operator=(DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addAccount_ == nullptr; };
    // addAccount Field Functions 
    bool hasAddAccount() const { return this->addAccount_ != nullptr;};
    void deleteAddAccount() { this->addAccount_ = nullptr;};
    inline const vector<string> & addAccount() const { DARABONBA_PTR_GET_CONST(addAccount_, vector<string>) };
    inline vector<string> addAccount() { DARABONBA_PTR_GET(addAccount_, vector<string>) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts& setAddAccount(const vector<string> & addAccount) { DARABONBA_PTR_SET_VALUE(addAccount_, addAccount) };
    inline DescribeImagePipelinesResponseBodyImagePipelineImagePipelineSetAddAccounts& setAddAccount(vector<string> && addAccount) { DARABONBA_PTR_SET_RVALUE(addAccount_, addAccount) };


  protected:
    std::shared_ptr<vector<string>> addAccount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
