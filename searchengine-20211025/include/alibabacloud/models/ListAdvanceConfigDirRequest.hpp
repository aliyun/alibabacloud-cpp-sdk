// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTADVANCECONFIGDIRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTADVANCECONFIGDIRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListAdvanceConfigDirRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAdvanceConfigDirRequest& obj) { 
      DARABONBA_PTR_TO_JSON(dirName, dirName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAdvanceConfigDirRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(dirName, dirName_);
    };
    ListAdvanceConfigDirRequest() = default ;
    ListAdvanceConfigDirRequest(const ListAdvanceConfigDirRequest &) = default ;
    ListAdvanceConfigDirRequest(ListAdvanceConfigDirRequest &&) = default ;
    ListAdvanceConfigDirRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAdvanceConfigDirRequest() = default ;
    ListAdvanceConfigDirRequest& operator=(const ListAdvanceConfigDirRequest &) = default ;
    ListAdvanceConfigDirRequest& operator=(ListAdvanceConfigDirRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dirName_ != nullptr; };
    // dirName Field Functions 
    bool hasDirName() const { return this->dirName_ != nullptr;};
    void deleteDirName() { this->dirName_ = nullptr;};
    inline string dirName() const { DARABONBA_PTR_GET_DEFAULT(dirName_, "") };
    inline ListAdvanceConfigDirRequest& setDirName(string dirName) { DARABONBA_PTR_SET_VALUE(dirName_, dirName) };


  protected:
    // The name of the directory
    // 
    // This parameter is required.
    std::shared_ptr<string> dirName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
