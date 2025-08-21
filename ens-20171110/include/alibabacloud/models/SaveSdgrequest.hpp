// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVESDGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVESDGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class SaveSDGRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveSDGRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveSDGRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
    };
    SaveSDGRequest() = default ;
    SaveSDGRequest(const SaveSDGRequest &) = default ;
    SaveSDGRequest(SaveSDGRequest &&) = default ;
    SaveSDGRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveSDGRequest() = default ;
    SaveSDGRequest& operator=(const SaveSDGRequest &) = default ;
    SaveSDGRequest& operator=(SaveSDGRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->SDGId_ != nullptr; };
    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string SDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline SaveSDGRequest& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


  protected:
    // The ID of the SDG to be saved.
    std::shared_ptr<string> SDGId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
