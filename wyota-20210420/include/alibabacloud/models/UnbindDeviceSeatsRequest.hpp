// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNBINDDEVICESEATSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNBINDDEVICESEATSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class UnbindDeviceSeatsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnbindDeviceSeatsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SerialNoList, serialNoList_);
    };
    friend void from_json(const Darabonba::Json& j, UnbindDeviceSeatsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SerialNoList, serialNoList_);
    };
    UnbindDeviceSeatsRequest() = default ;
    UnbindDeviceSeatsRequest(const UnbindDeviceSeatsRequest &) = default ;
    UnbindDeviceSeatsRequest(UnbindDeviceSeatsRequest &&) = default ;
    UnbindDeviceSeatsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnbindDeviceSeatsRequest() = default ;
    UnbindDeviceSeatsRequest& operator=(const UnbindDeviceSeatsRequest &) = default ;
    UnbindDeviceSeatsRequest& operator=(UnbindDeviceSeatsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serialNoList_ == nullptr; };
    // serialNoList Field Functions 
    bool hasSerialNoList() const { return this->serialNoList_ != nullptr;};
    void deleteSerialNoList() { this->serialNoList_ = nullptr;};
    inline const vector<string> & getSerialNoList() const { DARABONBA_PTR_GET_CONST(serialNoList_, vector<string>) };
    inline vector<string> getSerialNoList() { DARABONBA_PTR_GET(serialNoList_, vector<string>) };
    inline UnbindDeviceSeatsRequest& setSerialNoList(const vector<string> & serialNoList) { DARABONBA_PTR_SET_VALUE(serialNoList_, serialNoList) };
    inline UnbindDeviceSeatsRequest& setSerialNoList(vector<string> && serialNoList) { DARABONBA_PTR_SET_RVALUE(serialNoList_, serialNoList) };


  protected:
    shared_ptr<vector<string>> serialNoList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
