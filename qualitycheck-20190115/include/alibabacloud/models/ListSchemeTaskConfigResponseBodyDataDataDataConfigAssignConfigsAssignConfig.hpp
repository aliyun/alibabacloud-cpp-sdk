// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODYDATADATADATACONFIGASSIGNCONFIGSASSIGNCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTSCHEMETASKCONFIGRESPONSEBODYDATADATADATACONFIGASSIGNCONFIGSASSIGNCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfigAssignConfigContests.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AssignConfigContests, assignConfigContests_);
    };
    friend void from_json(const Darabonba::Json& j, ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AssignConfigContests, assignConfigContests_);
    };
    ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig() = default ;
    ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig(const ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig &) = default ;
    ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig(ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig &&) = default ;
    ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig() = default ;
    ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig& operator=(const ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig &) = default ;
    ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig& operator=(ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->assignConfigContests_ != nullptr; };
    // assignConfigContests Field Functions 
    bool hasAssignConfigContests() const { return this->assignConfigContests_ != nullptr;};
    void deleteAssignConfigContests() { this->assignConfigContests_ = nullptr;};
    inline const Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfigAssignConfigContests & assignConfigContests() const { DARABONBA_PTR_GET_CONST(assignConfigContests_, Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfigAssignConfigContests) };
    inline Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfigAssignConfigContests assignConfigContests() { DARABONBA_PTR_GET(assignConfigContests_, Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfigAssignConfigContests) };
    inline ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig& setAssignConfigContests(const Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfigAssignConfigContests & assignConfigContests) { DARABONBA_PTR_SET_VALUE(assignConfigContests_, assignConfigContests) };
    inline ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfig& setAssignConfigContests(Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfigAssignConfigContests && assignConfigContests) { DARABONBA_PTR_SET_RVALUE(assignConfigContests_, assignConfigContests) };


  protected:
    std::shared_ptr<Models::ListSchemeTaskConfigResponseBodyDataDataDataConfigAssignConfigsAssignConfigAssignConfigContests> assignConfigContests_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
