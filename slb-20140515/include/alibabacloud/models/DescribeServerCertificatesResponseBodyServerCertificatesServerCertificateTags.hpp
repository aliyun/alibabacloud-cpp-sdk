// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVERCERTIFICATESRESPONSEBODYSERVERCERTIFICATESSERVERCERTIFICATETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVERCERTIFICATESRESPONSEBODYSERVERCERTIFICATESSERVERCERTIFICATETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags() = default ;
    DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags(const DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags &) = default ;
    DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags(DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags &&) = default ;
    DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags() = default ;
    DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags& operator=(const DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags &) = default ;
    DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags& operator=(DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTagsTag>) };
    inline vector<Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTagsTag>) };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags& setTag(const vector<Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTags& setTag(vector<Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeServerCertificatesResponseBodyServerCertificatesServerCertificateTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
