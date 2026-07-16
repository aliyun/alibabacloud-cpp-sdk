// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEMETADATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEMETADATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeRuleMetadataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleMetadataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MetaName, metaName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleMetadataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MetaName, metaName_);
    };
    DescribeRuleMetadataRequest() = default ;
    DescribeRuleMetadataRequest(const DescribeRuleMetadataRequest &) = default ;
    DescribeRuleMetadataRequest(DescribeRuleMetadataRequest &&) = default ;
    DescribeRuleMetadataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleMetadataRequest() = default ;
    DescribeRuleMetadataRequest& operator=(const DescribeRuleMetadataRequest &) = default ;
    DescribeRuleMetadataRequest& operator=(DescribeRuleMetadataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->metaName_ == nullptr; };
    // metaName Field Functions 
    bool hasMetaName() const { return this->metaName_ != nullptr;};
    void deleteMetaName() { this->metaName_ = nullptr;};
    inline string getMetaName() const { DARABONBA_PTR_GET_DEFAULT(metaName_, "") };
    inline DescribeRuleMetadataRequest& setMetaName(string metaName) { DARABONBA_PTR_SET_VALUE(metaName_, metaName) };


  protected:
    // The name of the metadata.
    // 
    // This parameter is required.
    shared_ptr<string> metaName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
