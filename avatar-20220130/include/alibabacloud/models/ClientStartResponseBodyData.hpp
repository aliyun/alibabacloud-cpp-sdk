// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLIENTSTARTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CLIENTSTARTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class ClientStartResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClientStartResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ImToken, imToken_);
    };
    friend void from_json(const Darabonba::Json& j, ClientStartResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImToken, imToken_);
    };
    ClientStartResponseBodyData() = default ;
    ClientStartResponseBodyData(const ClientStartResponseBodyData &) = default ;
    ClientStartResponseBodyData(ClientStartResponseBodyData &&) = default ;
    ClientStartResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClientStartResponseBodyData() = default ;
    ClientStartResponseBodyData& operator=(const ClientStartResponseBodyData &) = default ;
    ClientStartResponseBodyData& operator=(ClientStartResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imToken_ != nullptr; };
    // imToken Field Functions 
    bool hasImToken() const { return this->imToken_ != nullptr;};
    void deleteImToken() { this->imToken_ = nullptr;};
    inline string imToken() const { DARABONBA_PTR_GET_DEFAULT(imToken_, "") };
    inline ClientStartResponseBodyData& setImToken(string imToken) { DARABONBA_PTR_SET_VALUE(imToken_, imToken) };


  protected:
    std::shared_ptr<string> imToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
