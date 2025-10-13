// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SOURCECODEREPO_HPP_
#define ALIBABACLOUD_MODELS_SOURCECODEREPO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class SourceCodeRepo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SourceCodeRepo& obj) { 
      DARABONBA_PTR_TO_JSON(FullName, fullName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, SourceCodeRepo& obj) { 
      DARABONBA_PTR_FROM_JSON(FullName, fullName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    SourceCodeRepo() = default ;
    SourceCodeRepo(const SourceCodeRepo &) = default ;
    SourceCodeRepo(SourceCodeRepo &&) = default ;
    SourceCodeRepo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SourceCodeRepo() = default ;
    SourceCodeRepo& operator=(const SourceCodeRepo &) = default ;
    SourceCodeRepo& operator=(SourceCodeRepo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fullName_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr; };
    // fullName Field Functions 
    bool hasFullName() const { return this->fullName_ != nullptr;};
    void deleteFullName() { this->fullName_ = nullptr;};
    inline string fullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
    inline SourceCodeRepo& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SourceCodeRepo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SourceCodeRepo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> fullName_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
