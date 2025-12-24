// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLAYBOOKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLAYBOOKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sophonsoar20220728
{
namespace Models
{
  class CreatePlaybookResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePlaybookResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PlaybookUuid, playbookUuid_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePlaybookResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PlaybookUuid, playbookUuid_);
    };
    CreatePlaybookResponseBodyData() = default ;
    CreatePlaybookResponseBodyData(const CreatePlaybookResponseBodyData &) = default ;
    CreatePlaybookResponseBodyData(CreatePlaybookResponseBodyData &&) = default ;
    CreatePlaybookResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePlaybookResponseBodyData() = default ;
    CreatePlaybookResponseBodyData& operator=(const CreatePlaybookResponseBodyData &) = default ;
    CreatePlaybookResponseBodyData& operator=(CreatePlaybookResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->playbookUuid_ == nullptr; };
    // playbookUuid Field Functions 
    bool hasPlaybookUuid() const { return this->playbookUuid_ != nullptr;};
    void deletePlaybookUuid() { this->playbookUuid_ = nullptr;};
    inline string playbookUuid() const { DARABONBA_PTR_GET_DEFAULT(playbookUuid_, "") };
    inline CreatePlaybookResponseBodyData& setPlaybookUuid(string playbookUuid) { DARABONBA_PTR_SET_VALUE(playbookUuid_, playbookUuid) };


  protected:
    // UUID of the newly created playbook.
    std::shared_ptr<string> playbookUuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sophonsoar20220728
#endif
