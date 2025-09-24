// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class GetImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Verbose, verbose_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Verbose, verbose_);
    };
    GetImageRequest() = default ;
    GetImageRequest(const GetImageRequest &) = default ;
    GetImageRequest(GetImageRequest &&) = default ;
    GetImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageRequest() = default ;
    GetImageRequest& operator=(const GetImageRequest &) = default ;
    GetImageRequest& operator=(GetImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->verbose_ != nullptr; };
    // verbose Field Functions 
    bool hasVerbose() const { return this->verbose_ != nullptr;};
    void deleteVerbose() { this->verbose_ = nullptr;};
    inline bool verbose() const { DARABONBA_PTR_GET_DEFAULT(verbose_, false) };
    inline GetImageRequest& setVerbose(bool verbose) { DARABONBA_PTR_SET_VALUE(verbose_, verbose) };


  protected:
    // Specifies whether to display non-essential information, which contains tags. Valid values:
    // 
    // *   false (default)
    // *   true
    std::shared_ptr<bool> verbose_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
