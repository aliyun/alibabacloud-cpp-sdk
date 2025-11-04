// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DROPSEARCHLIBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DROPSEARCHLIBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DropSearchLibRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DropSearchLibRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SearchLibName, searchLibName_);
    };
    friend void from_json(const Darabonba::Json& j, DropSearchLibRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SearchLibName, searchLibName_);
    };
    DropSearchLibRequest() = default ;
    DropSearchLibRequest(const DropSearchLibRequest &) = default ;
    DropSearchLibRequest(DropSearchLibRequest &&) = default ;
    DropSearchLibRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DropSearchLibRequest() = default ;
    DropSearchLibRequest& operator=(const DropSearchLibRequest &) = default ;
    DropSearchLibRequest& operator=(DropSearchLibRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->searchLibName_ == nullptr; };
    // searchLibName Field Functions 
    bool hasSearchLibName() const { return this->searchLibName_ != nullptr;};
    void deleteSearchLibName() { this->searchLibName_ = nullptr;};
    inline string searchLibName() const { DARABONBA_PTR_GET_DEFAULT(searchLibName_, "") };
    inline DropSearchLibRequest& setSearchLibName(string searchLibName) { DARABONBA_PTR_SET_VALUE(searchLibName_, searchLibName) };


  protected:
    // The name of the search library.
    // 
    // This parameter is required.
    std::shared_ptr<string> searchLibName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
