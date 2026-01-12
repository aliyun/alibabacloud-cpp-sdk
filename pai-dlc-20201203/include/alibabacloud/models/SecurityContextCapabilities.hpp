// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SECURITYCONTEXTCAPABILITIES_HPP_
#define ALIBABACLOUD_MODELS_SECURITYCONTEXTCAPABILITIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
namespace Models
{
  class SecurityContextCapabilities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SecurityContextCapabilities& obj) { 
      DARABONBA_PTR_TO_JSON(Add, add_);
      DARABONBA_PTR_TO_JSON(Drop, drop_);
    };
    friend void from_json(const Darabonba::Json& j, SecurityContextCapabilities& obj) { 
      DARABONBA_PTR_FROM_JSON(Add, add_);
      DARABONBA_PTR_FROM_JSON(Drop, drop_);
    };
    SecurityContextCapabilities() = default ;
    SecurityContextCapabilities(const SecurityContextCapabilities &) = default ;
    SecurityContextCapabilities(SecurityContextCapabilities &&) = default ;
    SecurityContextCapabilities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SecurityContextCapabilities() = default ;
    SecurityContextCapabilities& operator=(const SecurityContextCapabilities &) = default ;
    SecurityContextCapabilities& operator=(SecurityContextCapabilities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->add_ == nullptr
        && this->drop_ == nullptr; };
    // add Field Functions 
    bool hasAdd() const { return this->add_ != nullptr;};
    void deleteAdd() { this->add_ = nullptr;};
    inline const vector<string> & getAdd() const { DARABONBA_PTR_GET_CONST(add_, vector<string>) };
    inline vector<string> getAdd() { DARABONBA_PTR_GET(add_, vector<string>) };
    inline SecurityContextCapabilities& setAdd(const vector<string> & add) { DARABONBA_PTR_SET_VALUE(add_, add) };
    inline SecurityContextCapabilities& setAdd(vector<string> && add) { DARABONBA_PTR_SET_RVALUE(add_, add) };


    // drop Field Functions 
    bool hasDrop() const { return this->drop_ != nullptr;};
    void deleteDrop() { this->drop_ = nullptr;};
    inline const vector<string> & getDrop() const { DARABONBA_PTR_GET_CONST(drop_, vector<string>) };
    inline vector<string> getDrop() { DARABONBA_PTR_GET(drop_, vector<string>) };
    inline SecurityContextCapabilities& setDrop(const vector<string> & drop) { DARABONBA_PTR_SET_VALUE(drop_, drop) };
    inline SecurityContextCapabilities& setDrop(vector<string> && drop) { DARABONBA_PTR_SET_RVALUE(drop_, drop) };


  protected:
    shared_ptr<vector<string>> add_ {};
    shared_ptr<vector<string>> drop_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
