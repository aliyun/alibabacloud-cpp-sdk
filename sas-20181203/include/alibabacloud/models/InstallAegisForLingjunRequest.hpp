// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLAEGISFORLINGJUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLAEGISFORLINGJUNREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class InstallAegisForLingjunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallAegisForLingjunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, InstallAegisForLingjunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    InstallAegisForLingjunRequest() = default ;
    InstallAegisForLingjunRequest(const InstallAegisForLingjunRequest &) = default ;
    InstallAegisForLingjunRequest(InstallAegisForLingjunRequest &&) = default ;
    InstallAegisForLingjunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallAegisForLingjunRequest() = default ;
    InstallAegisForLingjunRequest& operator=(const InstallAegisForLingjunRequest &) = default ;
    InstallAegisForLingjunRequest& operator=(InstallAegisForLingjunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->uuids_ == nullptr; };
    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline const vector<string> & uuids() const { DARABONBA_PTR_GET_CONST(uuids_, vector<string>) };
    inline vector<string> uuids() { DARABONBA_PTR_GET(uuids_, vector<string>) };
    inline InstallAegisForLingjunRequest& setUuids(const vector<string> & uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };
    inline InstallAegisForLingjunRequest& setUuids(vector<string> && uuids) { DARABONBA_PTR_SET_RVALUE(uuids_, uuids) };


  protected:
    // List of unique UUIDs for Lingjun bare metal.
    std::shared_ptr<vector<string>> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
