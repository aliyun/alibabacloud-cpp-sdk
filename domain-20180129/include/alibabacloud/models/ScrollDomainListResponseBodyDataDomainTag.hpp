// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCROLLDOMAINLISTRESPONSEBODYDATADOMAINTAG_HPP_
#define ALIBABACLOUD_MODELS_SCROLLDOMAINLISTRESPONSEBODYDATADOMAINTAG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ScrollDomainListResponseBodyDataDomainTagTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class ScrollDomainListResponseBodyDataDomainTag : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScrollDomainListResponseBodyDataDomainTag& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ScrollDomainListResponseBodyDataDomainTag& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ScrollDomainListResponseBodyDataDomainTag() = default ;
    ScrollDomainListResponseBodyDataDomainTag(const ScrollDomainListResponseBodyDataDomainTag &) = default ;
    ScrollDomainListResponseBodyDataDomainTag(ScrollDomainListResponseBodyDataDomainTag &&) = default ;
    ScrollDomainListResponseBodyDataDomainTag(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScrollDomainListResponseBodyDataDomainTag() = default ;
    ScrollDomainListResponseBodyDataDomainTag& operator=(const ScrollDomainListResponseBodyDataDomainTag &) = default ;
    ScrollDomainListResponseBodyDataDomainTag& operator=(ScrollDomainListResponseBodyDataDomainTag &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::ScrollDomainListResponseBodyDataDomainTagTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::ScrollDomainListResponseBodyDataDomainTagTag>) };
    inline vector<Models::ScrollDomainListResponseBodyDataDomainTagTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::ScrollDomainListResponseBodyDataDomainTagTag>) };
    inline ScrollDomainListResponseBodyDataDomainTag& setTag(const vector<Models::ScrollDomainListResponseBodyDataDomainTagTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ScrollDomainListResponseBodyDataDomainTag& setTag(vector<Models::ScrollDomainListResponseBodyDataDomainTagTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::ScrollDomainListResponseBodyDataDomainTagTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
