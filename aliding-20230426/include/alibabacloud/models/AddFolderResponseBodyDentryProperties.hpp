// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDFOLDERRESPONSEBODYDENTRYPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_ADDFOLDERRESPONSEBODYDENTRYPROPERTIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class AddFolderResponseBodyDentryProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddFolderResponseBodyDentryProperties& obj) { 
      DARABONBA_PTR_TO_JSON(ReadOnly, readOnly_);
    };
    friend void from_json(const Darabonba::Json& j, AddFolderResponseBodyDentryProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(ReadOnly, readOnly_);
    };
    AddFolderResponseBodyDentryProperties() = default ;
    AddFolderResponseBodyDentryProperties(const AddFolderResponseBodyDentryProperties &) = default ;
    AddFolderResponseBodyDentryProperties(AddFolderResponseBodyDentryProperties &&) = default ;
    AddFolderResponseBodyDentryProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddFolderResponseBodyDentryProperties() = default ;
    AddFolderResponseBodyDentryProperties& operator=(const AddFolderResponseBodyDentryProperties &) = default ;
    AddFolderResponseBodyDentryProperties& operator=(AddFolderResponseBodyDentryProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->readOnly_ == nullptr; };
    // readOnly Field Functions 
    bool hasReadOnly() const { return this->readOnly_ != nullptr;};
    void deleteReadOnly() { this->readOnly_ = nullptr;};
    inline bool readOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
    inline AddFolderResponseBodyDentryProperties& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


  protected:
    std::shared_ptr<bool> readOnly_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
