// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCORELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCORELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeScoreListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScoreListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScoreListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    DescribeScoreListRequest() = default ;
    DescribeScoreListRequest(const DescribeScoreListRequest &) = default ;
    DescribeScoreListRequest(DescribeScoreListRequest &&) = default ;
    DescribeScoreListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScoreListRequest() = default ;
    DescribeScoreListRequest& operator=(const DescribeScoreListRequest &) = default ;
    DescribeScoreListRequest& operator=(DescribeScoreListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->lang_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeScoreListRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeScoreListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // Primary key ID.
    std::shared_ptr<string> id_ = nullptr;
    // Language type of the returned message. Values:
    // 
    // - **zh** (default): Chinese
    // - **en**: English
    std::shared_ptr<string> lang_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
