// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RENAMEFOLDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RENAMEFOLDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class RenameFolderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RenameFolderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, RenameFolderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    RenameFolderRequest() = default ;
    RenameFolderRequest(const RenameFolderRequest &) = default ;
    RenameFolderRequest(RenameFolderRequest &&) = default ;
    RenameFolderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RenameFolderRequest() = default ;
    RenameFolderRequest& operator=(const RenameFolderRequest &) = default ;
    RenameFolderRequest& operator=(RenameFolderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->name_ != nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RenameFolderRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
