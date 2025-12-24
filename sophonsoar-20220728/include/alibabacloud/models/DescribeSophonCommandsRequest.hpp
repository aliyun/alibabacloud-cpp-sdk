// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESOPHONCOMMANDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESOPHONCOMMANDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class DescribeSophonCommandsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSophonCommandsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSophonCommandsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    DescribeSophonCommandsRequest() = default ;
    DescribeSophonCommandsRequest(const DescribeSophonCommandsRequest &) = default ;
    DescribeSophonCommandsRequest(DescribeSophonCommandsRequest &&) = default ;
    DescribeSophonCommandsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSophonCommandsRequest() = default ;
    DescribeSophonCommandsRequest& operator=(const DescribeSophonCommandsRequest &) = default ;
    DescribeSophonCommandsRequest& operator=(DescribeSophonCommandsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSophonCommandsRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // The name of the command. Fuzzy match is supported.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
