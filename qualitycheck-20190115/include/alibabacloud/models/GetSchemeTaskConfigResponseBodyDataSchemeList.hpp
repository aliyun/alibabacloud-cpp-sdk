// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCHEMETASKCONFIGRESPONSEBODYDATASCHEMELIST_HPP_
#define ALIBABACLOUD_MODELS_GETSCHEMETASKCONFIGRESPONSEBODYDATASCHEMELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetSchemeTaskConfigResponseBodyDataSchemeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSchemeTaskConfigResponseBodyDataSchemeList& obj) { 
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SchemeId, schemeId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSchemeTaskConfigResponseBodyDataSchemeList& obj) { 
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SchemeId, schemeId_);
    };
    GetSchemeTaskConfigResponseBodyDataSchemeList() = default ;
    GetSchemeTaskConfigResponseBodyDataSchemeList(const GetSchemeTaskConfigResponseBodyDataSchemeList &) = default ;
    GetSchemeTaskConfigResponseBodyDataSchemeList(GetSchemeTaskConfigResponseBodyDataSchemeList &&) = default ;
    GetSchemeTaskConfigResponseBodyDataSchemeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSchemeTaskConfigResponseBodyDataSchemeList() = default ;
    GetSchemeTaskConfigResponseBodyDataSchemeList& operator=(const GetSchemeTaskConfigResponseBodyDataSchemeList &) = default ;
    GetSchemeTaskConfigResponseBodyDataSchemeList& operator=(GetSchemeTaskConfigResponseBodyDataSchemeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr
        && this->schemeId_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetSchemeTaskConfigResponseBodyDataSchemeList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // schemeId Field Functions 
    bool hasSchemeId() const { return this->schemeId_ != nullptr;};
    void deleteSchemeId() { this->schemeId_ = nullptr;};
    inline int64_t schemeId() const { DARABONBA_PTR_GET_DEFAULT(schemeId_, 0L) };
    inline GetSchemeTaskConfigResponseBodyDataSchemeList& setSchemeId(int64_t schemeId) { DARABONBA_PTR_SET_VALUE(schemeId_, schemeId) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> schemeId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
