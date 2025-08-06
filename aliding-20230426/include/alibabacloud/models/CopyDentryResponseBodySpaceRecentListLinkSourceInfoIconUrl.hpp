// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYDENTRYRESPONSEBODYSPACERECENTLISTLINKSOURCEINFOICONURL_HPP_
#define ALIBABACLOUD_MODELS_COPYDENTRYRESPONSEBODYSPACERECENTLISTLINKSOURCEINFOICONURL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl& obj) { 
      DARABONBA_PTR_TO_JSON(Line, line_);
      DARABONBA_PTR_TO_JSON(Small, small_);
    };
    friend void from_json(const Darabonba::Json& j, CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl& obj) { 
      DARABONBA_PTR_FROM_JSON(Line, line_);
      DARABONBA_PTR_FROM_JSON(Small, small_);
    };
    CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl() = default ;
    CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl(const CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl &) = default ;
    CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl(CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl &&) = default ;
    CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl() = default ;
    CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl& operator=(const CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl &) = default ;
    CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl& operator=(CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->line_ != nullptr
        && this->small_ != nullptr; };
    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string line() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    // small Field Functions 
    bool hasSmall() const { return this->small_ != nullptr;};
    void deleteSmall() { this->small_ = nullptr;};
    inline string small() const { DARABONBA_PTR_GET_DEFAULT(small_, "") };
    inline CopyDentryResponseBodySpaceRecentListLinkSourceInfoIconUrl& setSmall(string small) { DARABONBA_PTR_SET_VALUE(small_, small) };


  protected:
    std::shared_ptr<string> line_ = nullptr;
    std::shared_ptr<string> small_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
