// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENODEPOOLVULSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENODEPOOLVULSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeNodePoolVulsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNodePoolVulsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(necessity, necessity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNodePoolVulsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(necessity, necessity_);
    };
    DescribeNodePoolVulsRequest() = default ;
    DescribeNodePoolVulsRequest(const DescribeNodePoolVulsRequest &) = default ;
    DescribeNodePoolVulsRequest(DescribeNodePoolVulsRequest &&) = default ;
    DescribeNodePoolVulsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNodePoolVulsRequest() = default ;
    DescribeNodePoolVulsRequest& operator=(const DescribeNodePoolVulsRequest &) = default ;
    DescribeNodePoolVulsRequest& operator=(DescribeNodePoolVulsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->necessity_ != nullptr; };
    // necessity Field Functions 
    bool hasNecessity() const { return this->necessity_ != nullptr;};
    void deleteNecessity() { this->necessity_ = nullptr;};
    inline string necessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
    inline DescribeNodePoolVulsRequest& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


  protected:
    // The priority to fix the vulnerability. Separate multiple priorities with commas (,). Valid values:
    // 
    // *   `asap`: high
    // *   `later`: medium
    // *   `nntf`: low
    std::shared_ptr<string> necessity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
