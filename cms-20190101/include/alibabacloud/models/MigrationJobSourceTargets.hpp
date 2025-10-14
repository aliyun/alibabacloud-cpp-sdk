// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOBSOURCETARGETS_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOBSOURCETARGETS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MigrationJobSourceTargetsContent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJobSourceTargets : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJobSourceTargets& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJobSourceTargets& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    MigrationJobSourceTargets() = default ;
    MigrationJobSourceTargets(const MigrationJobSourceTargets &) = default ;
    MigrationJobSourceTargets(MigrationJobSourceTargets &&) = default ;
    MigrationJobSourceTargets(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJobSourceTargets() = default ;
    MigrationJobSourceTargets& operator=(const MigrationJobSourceTargets &) = default ;
    MigrationJobSourceTargets& operator=(MigrationJobSourceTargets &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->type_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline const Models::MigrationJobSourceTargetsContent & content() const { DARABONBA_PTR_GET_CONST(content_, Models::MigrationJobSourceTargetsContent) };
    inline Models::MigrationJobSourceTargetsContent content() { DARABONBA_PTR_GET(content_, Models::MigrationJobSourceTargetsContent) };
    inline MigrationJobSourceTargets& setContent(const Models::MigrationJobSourceTargetsContent & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
    inline MigrationJobSourceTargets& setContent(Models::MigrationJobSourceTargetsContent && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline MigrationJobSourceTargets& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::MigrationJobSourceTargetsContent> content_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
