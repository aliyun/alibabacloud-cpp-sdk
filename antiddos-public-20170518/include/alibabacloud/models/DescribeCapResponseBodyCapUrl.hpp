// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECAPRESPONSEBODYCAPURL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECAPRESPONSEBODYCAPURL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeCapResponseBodyCapUrl : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCapResponseBodyCapUrl& obj) { 
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCapResponseBodyCapUrl& obj) { 
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    DescribeCapResponseBodyCapUrl() = default ;
    DescribeCapResponseBodyCapUrl(const DescribeCapResponseBodyCapUrl &) = default ;
    DescribeCapResponseBodyCapUrl(DescribeCapResponseBodyCapUrl &&) = default ;
    DescribeCapResponseBodyCapUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCapResponseBodyCapUrl() = default ;
    DescribeCapResponseBodyCapUrl& operator=(const DescribeCapResponseBodyCapUrl &) = default ;
    DescribeCapResponseBodyCapUrl& operator=(DescribeCapResponseBodyCapUrl &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->url_ != nullptr; };
    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline DescribeCapResponseBodyCapUrl& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The download link to the traffic data.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
