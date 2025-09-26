// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEBROWSEROUT_HPP_
#define ALIBABACLOUD_MODELS_DELETEBROWSEROUT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class DeleteBrowserOut : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteBrowserOut& obj) { 
      DARABONBA_PTR_TO_JSON(browserId, browserId_);
      DARABONBA_PTR_TO_JSON(browserName, browserName_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteBrowserOut& obj) { 
      DARABONBA_PTR_FROM_JSON(browserId, browserId_);
      DARABONBA_PTR_FROM_JSON(browserName, browserName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    DeleteBrowserOut() = default ;
    DeleteBrowserOut(const DeleteBrowserOut &) = default ;
    DeleteBrowserOut(DeleteBrowserOut &&) = default ;
    DeleteBrowserOut(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteBrowserOut() = default ;
    DeleteBrowserOut& operator=(const DeleteBrowserOut &) = default ;
    DeleteBrowserOut& operator=(DeleteBrowserOut &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->browserId_ != nullptr
        && this->browserName_ != nullptr && this->status_ != nullptr; };
    // browserId Field Functions 
    bool hasBrowserId() const { return this->browserId_ != nullptr;};
    void deleteBrowserId() { this->browserId_ = nullptr;};
    inline string browserId() const { DARABONBA_PTR_GET_DEFAULT(browserId_, "") };
    inline DeleteBrowserOut& setBrowserId(string browserId) { DARABONBA_PTR_SET_VALUE(browserId_, browserId) };


    // browserName Field Functions 
    bool hasBrowserName() const { return this->browserName_ != nullptr;};
    void deleteBrowserName() { this->browserName_ = nullptr;};
    inline string browserName() const { DARABONBA_PTR_GET_DEFAULT(browserName_, "") };
    inline DeleteBrowserOut& setBrowserName(string browserName) { DARABONBA_PTR_SET_VALUE(browserName_, browserName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DeleteBrowserOut& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> browserId_ = nullptr;
    std::shared_ptr<string> browserName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
