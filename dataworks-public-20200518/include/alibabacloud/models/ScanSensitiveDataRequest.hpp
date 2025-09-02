// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANSENSITIVEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCANSENSITIVEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ScanSensitiveDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanSensitiveDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
    };
    friend void from_json(const Darabonba::Json& j, ScanSensitiveDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
    };
    ScanSensitiveDataRequest() = default ;
    ScanSensitiveDataRequest(const ScanSensitiveDataRequest &) = default ;
    ScanSensitiveDataRequest(ScanSensitiveDataRequest &&) = default ;
    ScanSensitiveDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanSensitiveDataRequest() = default ;
    ScanSensitiveDataRequest& operator=(const ScanSensitiveDataRequest &) = default ;
    ScanSensitiveDataRequest& operator=(ScanSensitiveDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline string data() const { DARABONBA_PTR_GET_DEFAULT(data_, "") };
    inline ScanSensitiveDataRequest& setData(string data) { DARABONBA_PTR_SET_VALUE(data_, data) };


  protected:
    // The data that you want to check.
    // 
    // This parameter is required.
    std::shared_ptr<string> data_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
